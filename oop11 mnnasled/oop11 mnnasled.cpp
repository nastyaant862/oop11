#include "oop11 mnnasled.h"
#include <iostream>

void Cat::Speak() {
	cout << name << " says 'Meow'." << endl;
}
void Dog::Speak() {
	cout << name << " says 'Woof'." << endl;
}
void Parrot::Speak() {
	cout << name << " says random word." << endl;
}