#include <iostream>

// ! OBJECTS

class Room
{
  public: // ? Public means that these member variables and methods are acessable from outside the class.

    // ? Constructor member method is a function that is automatically called on object creation. It has to be public and doesn't need a return type. Also has to have the same name as the class

    // Room(int h, int w, int l) {

    //   height = h;
    //   width = w;
    //   length = l;

    // };

    std::string name;
    int height;
    int width;
    int length;

    int calculate_area() {
      return length * width;
    }

    int calculate_volume() {
      return length * width * height;
    }

    void peek() {
      declare_privacy();
    }

  private:
    void declare_privacy() {
      std::cout << "HEY! This is private, don't look in here!";
    }

};

// ! NORMAL OBJECT CREATION

void create_objects() {

  // ? Both of the following create a new object. The pointer lasts longer in memory though.

  Room *bathroom = new Room();
  Room bedroom;

  bedroom.width = 3;
  bedroom.length = 7;

  bathroom->length = 2;
  (*bathroom).width = 3;
  bathroom->height = 2;

  std::cout << "The volume of the bathroom is: " << bathroom->calculate_volume() << std::endl;
  std::cout << "The area of the bedroom is: " << bedroom.calculate_area() << std::endl;

  // bathroom->declare_privacy(); // ? This will not work because the function is private!
  bathroom->peek(); // ? This will work because the function is public, and is looking at a private function from within the object.

};

// ! OBJECTS WITH CONSTRUCTOR FUNCTIONS


class Room_Constructor
{
  public:
    // ? Constructor member method is a function that is automatically called on object creation. It has to be public and doesn't need a return type. Also has to have the same name as the class

    Room_Constructor(int h, int w, int l) {
      height = h;
      width = w;
      length = l;

    };

  // ? COPY CONSTRUCTORS are a type of constructor that overloads  the constructor to allow you to use an object as a parameter/arguement to create a copy of that object.

    Room_Constructor(Room_Constructor &obj) {
      length = obj.length;
      height = obj.height;
      width = obj.width;
    }

    std::string name;
    int height;
    int width;
    int length;

    int calculate_area() {
      return length * width;
    }

    int calculate_volume() {
      return length * width * height;
    }

    void peek() {
      declare_privacy();
    }

  private:
    void declare_privacy() {
      std::cout << "HEY! This is private, don't look in here!";
    }

};

void create_objects_constructed() {

  // ? Both of the following create a new object. The pointer lasts longer in memory though.

  Room_Constructor *bathroom = new Room_Constructor(2, 3, 5);
  Room_Constructor bedroom(5, 1, 2);

  // ? Both of the following use the copy constructor

  Room_Constructor bedroom2(bedroom);
  // Room_Constructor bedroom2 = bedroom;

  std::cout << "The volume of the bathroom is: " << bathroom->calculate_volume() << std::endl;
  std::cout << "The area of the bedroom is: " << bedroom.calculate_area() << std::endl;
  std::cout << "The area of the bedroom2 is: " << bedroom2.calculate_area() << std::endl;


}