class Foo {
  int foo;
};

/*
OUTPUT:
{
  "includes": [],
  "skipped_by_preprocessor": [],
  "types": [{
      "id": 0,
      "usr": 15041163540773201510,
      "short_name": "Foo",
      "detailed_name": "Foo",
      "kind": 7,
      "definition_spelling": "1:7-1:10",
      "definition_extent": "1:1-3:2",
      "parents": [],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [0],
      "instances": [],
      "uses": ["1:7-1:10"]
    }],
  "funcs": [],
  "vars": [{
      "id": 0,
      "usr": 9736582033442720743,
      "short_name": "foo",
      "detailed_name": "int Foo::foo",
      "definition_spelling": "2:7-2:10",
      "definition_extent": "2:3-2:10",
      "declaring_type": 0,
      "kind": 14,
      "uses": ["2:7-2:10"]
    }]
}
*/
