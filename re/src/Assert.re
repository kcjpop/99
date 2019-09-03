[@bs.module "assert"] external toBeTrue : bool => (~message: string) => unit = "assert";
[@bs.module "assert"] external deepEqual : bool => (~message: string) => unit = "deepStrictEqual";
