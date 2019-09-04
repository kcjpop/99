open Assert;
open Belt.Option;

/*
 1. Write a function last : list('a) -> option('a) that returns the last
    element of a list. (easy)
 */
module Problem_1 = {
  let rec last =
    fun
    | [] => None
    | [hd] => Some(hd)
    | [_, ...rest] => last(rest);
};

ok(isNone(Problem_1.last([])), ());
ok(isSome(Problem_1.last([1, 2])), ());
deepEqual(getExn(Problem_1.last([1])), 1, ());
deepEqual(getExn(Problem_1.last([1, 2])), 2, ());
deepEqual(getExn(Problem_1.last([1, 2, 3])), 3, ());

/*
  2. Find the last but one (last and penultimate) elements of a list. (easy)
 */
module Problem_2 = {
  let rec last_two =
    fun
    | []
    | [_] => None
    | [x, y] => Some((x, y))
    | [_, ...rest] => last_two(rest);
};

ok(isNone(Problem_2.last_two([])), ());
ok(isNone(Problem_2.last_two([1])), ());
ok(isSome(Problem_2.last_two([1, 2])), ());
deepEqual(getExn(Problem_2.last_two([1, 2])), (1, 2), ());
deepEqual(getExn(Problem_2.last_two([1, 2, 3])), (2, 3), ());
