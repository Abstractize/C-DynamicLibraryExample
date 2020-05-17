#include "Person.h"

#ifndef LIB_LIBRARY_H __attribute__((visibility("default")));
#define LIB_LIBRARY_H


extern "C"
{
    //Funciones que se llaman en JS
    int CountPeople();
};


#endif //LIB_LIBRARY_H
