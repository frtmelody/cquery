class Foo {
  static Foo* member;
};
Foo* Foo::member = nullptr;

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
      "instances": [0],
      "uses": ["1:7-1:10", "2:10-2:13", "4:1-4:4", "4:6-4:9"]
    }],
  "funcs": [],
  "vars": [{
      "id": 0,
      "usr": 5844987037615239736,
      "short_name": "member",
      "detailed_name": "Foo *Foo::member",
      "hover": "Foo *Foo::member = nullptr",
      "declaration": "2:15-2:21",
      "definition_spelling": "4:11-4:17",
      "definition_extent": "4:1-4:27",
      "variable_type": 0,
      "declaring_type": 0,
      "kind": 21,
      "uses": ["2:15-2:21", "4:11-4:17"]
    }]
}
*/
