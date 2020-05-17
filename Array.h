//
//  Array.hpp
//  Cosa rara
//
//  Created by Gabriel Abarca Aguilar on 4/28/20.
//  Copyright © 2020 Gabriel Abarca Aguilar. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp

#include <stdio.h>

template <typename T>
class Array {
private:
    T* ptr;
    int size;
  
public:
    Array(T arr[], int s);
    void print();
};

#endif /* Array_hpp */
