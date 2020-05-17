//
// Created by Gabriel Abarca Aguilar on 4/27/20.
//
#include <iostream>
#include "Person.h"

int Person::size = 0;

Person::Person(int id, int otherId)
{
    this->id = id;
    this->otherId = otherId;
    Person::size++;
};
Person::~Person() {
    Person::size--;
}
