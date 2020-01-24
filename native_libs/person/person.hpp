#include <scapix/bridge/object.h>

using namespace std;

namespace person {

  class Person : public scapix::bridge::object<Person>
  {
    private:
      string name;
      int32_t age;
    public:
      // Person(string name);
      Person(string name, int32_t age);
      string SpeakName();
      int32_t SpeakAge();
  };

}

