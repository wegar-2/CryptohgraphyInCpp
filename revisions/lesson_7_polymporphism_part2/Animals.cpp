#include "Animals.hpp"
#include <iostream>


/* ========================================================================== */

Animal::Animal() {
    std::cout << "Class Animal non-parametrized constructor called!" << std::endl;
    pItsAge = new int(1);
}

Animal::Animal(int itsAge) {
    std::cout << "Class Animal parametrized constructor called!" << std::endl;
    pItsAge = new int(itsAge);
}

Animal::~Animal() {
    std::cout << "Class Animal destructor called!" << std::endl;
    delete pItsAge;
    pItsAge = 0;
}

void Animal::MakeSound() const {
    std::cout << "Sound of an animal!" << std::endl;
}

int Animal::GetAge() const {
    std::cout << "Returning age of an animal!" << std::endl;
    return *pItsAge;
}



/* ========================================================================== */

Dog::Dog() : Animal() {
    std::cout << "Class Dog non-parametrized constructor called!" << std::endl;
    pItsHeight = new unsigned int(1);
}

Dog::Dog(int itsAge) : Animal(itsAge) {
    std::cout << "Class Dog one-parameter constructor called!" << std::endl;
    pItsHeight = new unsigned int (2);
}

Dog::Dog(int itsAge, unsigned int itsHeight) : Animal(itsAge) {
    std::cout << "Class Dog two-parameter constructor called!" << std::endl;
    pItsHeight = new unsigned int(itsHeight);
}

Dog::~Dog() {
    std::cout << "Class Dog destructor called!" << std::endl;
    delete pItsHeight;
    pItsHeight = 0;
}

void Dog::MakeSound() const {
    std::cout << "Sound of a dog!" << std::endl;
}

void Dog::CustomDogFunction() const {
    std::cout << "Inside CustomDogFunction - calling parent MakeSound method!" << std::endl;
    this->Animal::MakeSound();
}


