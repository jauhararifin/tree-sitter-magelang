// A tour of the Magelang syntax this grammar covers. Parsing this file must
// not produce any ERROR or MISSING node.

import fmt "std/fmt";
import mem "std/mem";

// Globals need an explicit type; the value is optional.
let stdout: i32 = 1;
let counter: i64;

struct IoVec {
  p: [*]u8,
  len: usize,
}

struct Pair<T, U> {
  a: T,
  b: U,
}

@wasm_import("env", "write_iovec")
fn write_iovec(fd: i32, iovec: *IoVec, count: i32, n_written: *i32): i32;

fn sum_to(n: i32): i32 {
  let total: i32 = 0;
  // for loops take an initializer, a condition and an update
  for let i: i32 = 0; i < n; i += 1 {
    if i % 15 == 0 {
      continue;
    } else if i > 1000 {
      break;
    }
    total += i;
  }
  return total;
}

fn swap<T>(a: *T, b: *T) {
  let tmp: T = a.*;
  a.* = b.*;
  b.* = tmp;
}

fn apply(values: [*]i32, len: usize, f: fn(v: i32): i32) {
  let i: usize = 0;
  while i < len {
    values[i].* = f(values[i].*);
    i = i + 1;
  }
}

@main()
@wasm_export("_start")
fn main() {
  // defer runs at the end of the enclosing scope
  defer fmt::print_str("done\n");

  let p = mem::alloc::<Pair<i32, i32>>();
  p.* = Pair::<i32, i32>{a: 1, b: 2};
  swap::<i32>(p.a, p.b);

  let mask: i32 = 0b1010_1010 | 0o755 & 0xdead_beef ^ 1_000;
  let ratio: f64 = 3.14e-5 / 2.0;
  let ch = '\n';
  let msg = "hello\tworld\x21\n";

  let iovec = 40 as *IoVec;
  iovec.p.* = msg as [*]u8;
  iovec.len.* = 13;
  write_iovec(stdout, iovec, 1, 0 as *i32);

  {
    defer mem::dealloc::<Pair<i32, i32>>(p);
    fmt::print_i32(sum_to(100) + mask - (~ch as i32) * -1);
  }

  let ok: bool = !(true && false) || null == null;
  counter <<= 2;
}
