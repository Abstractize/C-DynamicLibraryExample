//
// Created by Gabriel Abarca Aguilar on 4/27/20.
//

#ifndef MYSHAREDLIB_PERSON_H __attribute__((visibility("default")));
#define MYSHAREDLIB_PERSON_H

class MYSHAREDLIB_PERSON_H Person {
public:
    Person(int id, int otherId);
    ~Person();
    static int size;

private:
    int id;
    int otherId;
};


#endif //MYSHAREDLIB_PERSON_H
