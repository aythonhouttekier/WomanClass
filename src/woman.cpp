#include "woman.h"

Woman::Woman(int age, std::string name)      //scope resolution operator
{
    this->age = age;
    this->name = name;
}


std::string Woman::to_string()
{

    return name + " is " + std::to_string(age) + " years old.";

}
