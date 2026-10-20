// A tour of the Magelang syntax this grammar covers. Parsing this file must
// not produce any ERROR or MISSING node.

import fmt "std/fmt";
import mem "std/mem";

pub type Count = usize;
type NumberPair = (i32, i32);

// Globals require an explicit type; the value is optional.
pub var completed: Count = 0;
var last_total: i32;

pub struct Pair[T, U] {
  pub first: T,
  pub second: U,
}

fn sum_to(n: i32): i32 {
  var total: i32 = 0;
  // For loops take an initializer, a condition and an update.
  for var i: i32 = 0; i < n; i += 1 {
    if i > 1000 {
      break;
    }
    total += i;
  }
  return total;
}

fn swap[T](a: *T, b: *T) {
  var temporary: T = a.*;
  a.* = b.*;
  b.* = temporary;
}

fn apply(values: *[i32], transform: fn(value: i32): i32) {
  var i: usize = 0;
  while i < values.len {
    values[i].* = transform(values[i].*);
    i += 1;
  }
}

@main()
@wasm_export("_start")
fn main() {
  defer fmt.print_str("done\n");

  var pair = mem.alloc[Pair[i32, i32]]();
  pair.* = Pair[i32, i32]{first: 1, second: 2};
  swap[i32](pair.first, pair.second);

  var numbers: NumberPair = (pair.first.*, pair.second.*);
  numbers.0 += 10;
  last_total = sum_to(numbers.0);

  var data = mem.alloc_array[i32](3);
  data[0].* = 1;
  data[1].* = 2;
  data[2].* = 3;
  var values: *[i32] = *[i32]{ptr: data, len: 3};
  apply(values, sum_to);

  var mask: i32 = 0b1010_1010 | 0o755 & 0xdead_beef ^ 1_000;
  var ratio: f64 = 3.14e-5 / 2.0;
  var ch = '\n';
  var ok: bool = !(true && false) || null == null;
  if ok && ratio < 1.0 {
    fmt.print_i32(last_total + mask - (~ch as i32) * -1);
    fmt.print_str("\n");
  }

  completed += 1;
  mem.dealloc_array[i32](data);
  mem.dealloc[Pair[i32, i32]](pair);
}
