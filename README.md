#My Shared Lib
Ejemplo de como crear una biblioteca dinámica en C++ con Cmake.

##Pasos:
1. Creamos nuestro protecto como una biblioteca de C++ y seleccionamos shared o compartida como el tipo de biblioteca.

    ![Step1](/images/Step1.png)

    Al crearse la biblioteca vamos a ver que aparece esta linea en el CMAKE:

    ```
    add_library(mysharedlib SHARED library.cpp library.h)
    ```
    Esto significa que trabajariamos sobre una biblioteca dinámica en lugar de un archivo ejectubale, por lo tanto no 
    tendremos un *main.cpp*, lo mas cercano que tenemos es crear una función en el archivo library.cpp.

2. Lo que sigue es especificar cuales funciones van a compartirse con otros lenguajes, para eso en la linea:
    ```
    #ifndef LIB_LIBRARY_H 
    ```
    se escribe este comando: 
    ```
    #ifndef LIB_LIBRARY_H __attribute__((visibility("default")));
    ```

    y dentro del "library.h" escribimos las funciones dentro de:
    ```
    extern "C"
    {
        //Aqui llamariamos las funciones que serían ejecutadas por el otro lenguaje
        int CountPeople();
        void foo1();
        bool foo2();
    };
    ```
    esas funciones luego serían definidas en library.cpp:
    ```
    int CountPeople()
    {
        return Person::size;
    };
    void foo1()
    {
        //Do Something
    };
    bool foo2()
    {
        return true;
    };
    ```
3. Al tener listo el proyecto, "Buildeamos" el proyecto en lugar de correrlo.
Ese se hace con el martillo de las herramientas o compilando el proyecto con comandos.

    ![Tools](/images/Tools.png)

4. Eso nos genera un archivo .so en caso de que estemos en Linux, .dll en caso de Windows
o .dylib en caso de que estemos en MacOS, dentro de la carpeta cmake-build-debug, esa sería nuestra biblioteca dinámica.
Por lo tanto solo se copia la biblioteca y se pega en el directorio que se fuera a usar.

    ![Step4](/images/Step4.png)
    
5. Para usar la biblioteca en C++ use el ejemplo de: https://github.com/Abstractize/C-DinamycLibraryUsageExample

   Para usar el ejemplo en JavaScript puede usar la biblioteca: https://github.com/node-ffi/node-ffi