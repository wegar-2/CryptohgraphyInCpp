

class Animal {
public:
    Animal();
    Animal(int itsAge);
    virtual ~Animal();
    virtual void MakeSound() const;
    virtual int GetAge() const;
private:
    int* pItsAge;
};


class Dog : public Animal {
public:
    Dog();
    Dog(int itsAge);
    Dog(int itsAge, unsigned int itsHeight);
    virtual ~Dog();
    virtual void MakeSound() const;
    void CustomDogFunction() const;
private:
    unsigned int* pItsHeight;
};
