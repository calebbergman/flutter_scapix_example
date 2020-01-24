#include <scapix/bridge/object.h>

using namespace std;

namespace person {

  class Person : public scapix::bridge::object<Person>
  {
    private:
      string name;
    public:
      Person(string name);
      string SpeakName();
  };

}

