#include <iostream>
#include "person.hpp"

using namespace std;

namespace flutter_example {

  Person::Person(string name) {
    this->name = name;
  }

  string Person::SpeakName() {
    cout << "My name is : " << this->name << endl;
    return this->name;
  }

}
