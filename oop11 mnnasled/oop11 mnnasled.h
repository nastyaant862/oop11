#ifndef OOP11MNNASLED_H
#define OOP11MNNASLED_H
#include <iostream>
using namespace std;

class Animal {
protected: string name;
public:
	Animal(string m_name) : name(m_name) {}
	virtual void Speak() = 0;
};
class Cat : public Animal {
public: 
	Cat(string name) : Animal(name) {}
	void Speak() override;
};
class Dog : public Animal {
public:
	Dog(string name) : Animal(name) {}
	void Speak() override;
};
class Parrot : public Animal {
public:
	Parrot(string name) : Animal(name) {}
	void Speak() override;
};

#endif