[@bs.module "assert"] [@bs.scope "strict"]
external ok: ('a, ~message: string=?, unit) => unit = "ok";
[@bs.module "assert"] [@bs.scope "strict"]
external deepEqual: ('a, 'b, ~message: string=?, unit) => unit =
  "deepStrictEqual";
