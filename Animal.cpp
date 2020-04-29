#include <iostream>
using namespace std;
class Dog
{
public:
	Dog();
	~Dog();
	Dog(Dog& d);

private:
	string name;
	string color;
};

Dog::Dog()
{
}

Dog::~Dog()
{
}
class Animal
{
public:
	Animal(Dog dog1, Dog dog2);
	~Animal();
	int	eat();
private:
Dog dog1, dog2;
string	name;
string color;
};

Animal::Animal(Dog dog1,Dog dog2) : Dog£¨dog1),Dog(dog2)
{
}

Animal::~Animal()
{
}

int Animal::eat()
{
	return 0;
}

