#include <iostream>

// ! STRUCTS AND ENUMERATION

// ? Enums are a custom data type that allows for a list of values to be represented rather than numbers. A enum variable can only be assigned to one of the enum types - Think of it like a drop down menu. THEY ARE STILL INTEGERS, JUST REPRESENTED AS VALUES/WORDS

enum Type : signed int
{
  dark, light, lightning, water, fire, earth 
};

// ? Structs are like classes, essentially prototype structures that hold various data types. for exambple a yugioh card data structure would have stars, attack, defence, name, type etc.

struct Yugioh_card
{
  std::string name;
  Type type;
  bool monster;
  int attack;
  int defence;
  int stars;
};

void create_yugioh_card() {

  // ? Instantiating Yugioh cards

  Yugioh_card yubel;

  yubel.name = "Yubel";
  yubel.type = dark;
  yubel.monster = true;
  yubel.attack = 0;
  yubel.defence = 0;
  yubel.stars = 10;

  std::cout << yubel.type << std::endl;

  // ? 

  Yugioh_card dark_magician = {
    "Dark Magician",
    dark,
    true,
    2500,
    2100,
    7
  };

  std::cout << dark_magician.attack;

}