let inc x =
  let () = print_int x in
  x + 1

let _ = Printf.printf "%n" (inc 4)
