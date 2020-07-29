#include <iostream>

// ! Pointers and References

// * COMPILING: g++ [name].cpp
// * RUNNING: ./a.out

int pointers_and_references() 
{

  // ! POINTERS
  // ? Pointers point towards a memory address/location, must be assigned to a memory adress

  int number = 4;

  int*num_ref = &number;

  // ? adding a * before a pointer dereferences it

  std::cout << "This is the number pointer dereferenced " << *num_ref << std::endl;
  std::cout << "This is the number pointer not dereferenced (It's location) " << num_ref << std::endl;

  // ! REFERENCES
  // ? References work the same way that non-primative variable assigment works in Javascript.
  // ? References point to the specific space in memeory that the thing is assigned to, not the value itself.

  int ref_num = 10;

  int&reference = ref_num; // ? This is assigned to the space in memory that the ref_num is in. Whenever the value at that memory space changes, this will reflect that.
  int not_referenece = ref_num; // ? this assigns a new place in memory for the value that is in ref_num

  ref_num = 20; // ? Changes the value at the memory location, also changing the referenece.

  std::cout << "This is the number " << ref_num;
  std::cout << "This is the reference " << reference << std::endl;
  std::cout << "This is just a copy of the number in a differnet memory location " << not_referenece << std::endl;

  return 0;
}