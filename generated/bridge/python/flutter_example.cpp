// Generated by Scapix Language Bridge

#include <pybind11/pybind11.h>

void scapix_python_export_person(pybind11::module& m);

PYBIND11_MODULE(person, m)
{
    m.doc() = "com.example.flutter_example";
    scapix_python_export_person(m);
}
