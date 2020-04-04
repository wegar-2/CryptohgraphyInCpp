#include <iostream>
#include "Animals.hpp"


int main()
{
    Animal animal1 = Animal();
    Animal animal2 = Animal(12);
    animal2.MakeSound();
    std::cout << "Age of animal2: " << animal2.GetAge() << std::endl;

    Dog dog1 = Dog();
    Dog dog2 = Dog(3);
    Dog dog3 = Dog(12, 13);

    dog3.MakeSound();
    dog3.Animal::MakeSound();
    dog3.CustomDogFunction();

    return 0;
}
