#include "oop11 mnnasled.h"
#include <iostream>

int main()
{
    Animal* animals[4] = {
        new Cat("Marsik"),
        new Dog("Busya"),
        new Cat("Lena"),
        new Parrot("Dan")
    };

    for (int i = 0; i < 4; i++) {
        animals[i]->Speak();
    }
    return 0;
}