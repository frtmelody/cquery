template<class T>
class Template {
  void Foo();
};

template<class T>
void Template<T>::Foo() {}

template<>
void Template<void>::Foo() {}


/*
// TODO: usage information on Template is bad.
// TODO: Foo() should have multiple definitions.

EXTRA_FLAGS:
-fms-compatibility
-fdelayed-template-parsing

OUTPUT:
{
  "includes": [],
  "skipped_by_preprocessor": [],
  "types": [{
      "id": 0,
      "usr": 17107291254533526269,
      "short_name": "Template",
      "detailed_name": "Template",
      "kind": 7,
      "definition_spelling": "2:7-2:15",
      "definition_extent": "2:1-4:2",
      "parents": [],
      "derived": [],
      "types": [],
      "funcs": [0],
      "vars": [],
      "instances": [],
      "uses": ["2:7-2:15", "7:6-7:14", "10:6-10:14"]
    }],
  "funcs": [{
      "id": 0,
      "is_operator": false,
      "usr": 11994188353303124840,
      "short_name": "Foo",
      "detailed_name": "void Template::Foo()",
      "kind": 16,
      "declarations": [{
          "spelling": "3:8-3:11",
          "extent": "3:3-3:13",
          "content": "void Foo()",
          "param_spellings": []
        }, {
          "spelling": "10:22-10:25",
          "extent": "9:1-10:30",
          "content": "template<>\nvoid Template<void>::Foo() {}",
          "param_spellings": []
        }],
      "definition_spelling": "7:19-7:22",
      "definition_extent": "6:1-7:24",
      "declaring_type": 0,
      "base": [],
      "derived": [],
      "locals": [],
      "callers": [],
      "callees": []
    }],
  "vars": []
}
*/
