#include "Person.h"

#ifndef PAPITASBBQ __attribute__((visibility("default")));
#define PAPITASBBQ

extern "C"
{
    //Funciones que se llaman en JS
    int CountPeople();
    void StartGB();
};


#endif //LIB_LIBRARY_H
