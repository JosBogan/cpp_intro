// ! PROTOTYPE FUNCTIONS

void proto_function(int, int);

void add() {
  proto_function(1, 2); // If you want to use a function before define it, you can prototype it as seen in this example
};

void proto_function(int a, int b) {
  std::cout << a + b;
};

// ! STATIC FUNCTIONS AND SCOPE

int* static_variable() { // ? The Function has to return a pointer!
  static int static_var = 4; // ? A STATIC VARIABLE stays in memory until the program finishes running, so it can be references/pointered
  return &static_var;
};

void static_function() {
  int* static_var = static_variable(); // ? Has be assigned as a pointer because it is recieving a memory location
  std::cout << *static_var; // ? Dereference it!
};

// ! RETURNING REFERENCE

// ? Above we saw that it is possible to return a pointer/memory location of a variable, it is also possible to return a reference

int test = 5;

int& reference_return() {
  return test; // ? This will return a reference to the variable ref_var
}

void reference_function() {
  std::cout << test;
  reference_return() = 20;
  std::cout << test;

  // std::cout << reference_return();
}