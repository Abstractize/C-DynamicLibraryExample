//
//  Array.cpp
//  Cosa rara
//
//  Created by Gabriel Abarca Aguilar on 4/28/20.
//  Copyright © 2020 Gabriel Abarca Aguilar. All rights reserved.
//

#include <iostream>
#include "Array.h"


using namespace std;

template <typename T>
Array<T>::Array(T arr[], int s)
{
    ptr = new T[s];
    size = s;
    for (int i = 0; i < size; i++)
        ptr[i] = arr[i];
};
  
template <typename T>
void Array<T>::print()
{
    for (int i = 0; i < size; i++)
        cout << " " << *(ptr + i);
    cout << endl;
};

template class Array<int>;
template class Array<char>;
template class Array<bool>;
template class Array<float>;
template class Array<double>;
template class Array<wchar_t>;