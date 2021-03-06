// Generated by Scapix Language Bridge
// https://www.scapix.com

#include <../../native_libs/person/person.hpp>
#import "Person.h"

@implementation Person

-(instancetype)initWithName:(NSString*)name
{
	return scapix::bridge::objc::init<flutter_example::Person, void(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)>(self, name);
}

-(NSString*)SpeakName
{
	return scapix::bridge::objc::call<std::basic_string<char, std::char_traits<char>, std::allocator<char> >(flutter_example::Person::*)(), &flutter_example::Person::SpeakName, NSString*>(self);
}

@end
