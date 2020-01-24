#include <iostream>
#include "person.hpp"

using namespace std;

namespace person {

  // Person::Person(string name) {
  //   Person(name, 30);
  // }

  Person::Person(string name, int32_t age) {
    this->name = name;
    this->age = age;
  }

  string Person::SpeakName() {
    cout << "My name is : " << this->name << endl;
    return this->name;
  }

  int32_t Person::SpeakAge() {
    return this->age;
  }

}
