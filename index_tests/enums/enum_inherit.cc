enum Foo : int {
  A,
  B = 20
};

/*
OUTPUT:
{
  "includes": [],
  "skipped_by_preprocessor": [],
  "types": [{
      "id": 0,
      "usr": 16985894625255407295,
      "short_name": "Foo",
      "detailed_name": "Foo",
      "kind": 5,
      "definition_spelling": "1:6-1:9",
      "definition_extent": "1:1-4:2",
      "parents": [],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [0, 1],
      "instances": [],
      "uses": ["1:6-1:9"]
    }],
  "funcs": [],
  "vars": [{
      "id": 0,
      "usr": 439339022761937396,
      "short_name": "A",
      "detailed_name": "Foo::A",
      "hover": "Foo::A = 0",
      "definition_spelling": "2:3-2:4",
      "definition_extent": "2:3-2:4",
      "variable_type": 0,
      "declaring_type": 0,
      "kind": 15,
      "uses": ["2:3-2:4"]
    }, {
      "id": 1,
      "usr": 15962370213938840720,
      "short_name": "B",
      "detailed_name": "Foo::B",
      "hover": "Foo::B = 20",
      "definition_spelling": "3:3-3:4",
      "definition_extent": "3:3-3:9",
      "variable_type": 0,
      "declaring_type": 0,
      "kind": 15,
      "uses": ["3:3-3:4"]
    }]
}
*/
