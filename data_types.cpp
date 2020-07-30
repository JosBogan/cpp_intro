#include <iostream>

// ! Data Type	Meaning	Size (in Bytes)
// int	Integer	2 or 4
// float	Floating-point	4
// double	Double Floating-point	8
// char	Character	1
// wchar_t	Wide Character	2
// bool	Boolean	1
// void	Empty	0


int strings()
{
  char name[] = "jos";

  std::cout << name;

  return 0;
}


int arrays()
{

  // ! ARRAYS
  int numbered_array[5]; // ? You can declare the number of items in an array, which will create an array of back to back memory adresses with the value 0

  int declared_array[2] = {2, 6}; // ? You can do the same as above but initialise it with values

  int array[] = { 2, 3, 3, 4, 3, 2 }; // ? Or you can declare an array without initialising it's length

  // std::cout << "This is an array " << array[3];


  std::cout << sizeof(array[0]) << std::endl; // ? sizeof gives the number of bytes alocated to something 

  for (int x = 0; x < (sizeof(array)/sizeof(array[0])); x++) // ? divide the size of an array element buy the number of elements for arr length
  {
    std::cout << array[x];
  };

  // ? Another way of looping through an array ONLY USABLE WITH C++11

  // for (int& x : array)
  // {
  //   std::cout << x;
  // };


  std::string string_array[] = {"cat", "dogs"};

  std::cout << std::endl << sizeof(string_array[0]) << std::endl;
  std::cout << sizeof(string_array[1]) << std::endl;

  std::string single_string = "dogs";
  std::cout << sizeof(single_string);

  // for (int x = 0; x < (sizeof(array)/sizeof(array[0])); x++) 
  // {
  //   std::cout << array[x];
  // }



  return 0;
}