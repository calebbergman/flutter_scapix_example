#include <scapix/bridge/object.h>

using namespace std;

namespace flutter_example {

  class Person : public scapix::bridge::object<Person>
  {
    private:
      string name;
    public:
      Person(string name);
      string SpeakName();
  };

}

