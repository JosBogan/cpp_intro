#include <iostream>

void string_types() {

  // ? There are two types of strings, C-Strings, which are essentially arrays of char.

  char char_str[] = "This is a c-string";
  std::cout << char_str << std::endl;

  // ? The other type (Object strings have various functions attached to them)

  std::string obj_string = "This is an object string ";
  std::cout << obj_string << "and has a length of " << obj_string.length();

}