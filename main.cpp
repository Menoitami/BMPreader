#include <iostream>
#include <fstream>
#include <typeinfo>
#include <string>
#include "BMPreader/BMPreader.h"



int main(int argv, char* args[]){


    if (argv <2){

        std::cout<<"Params: <filepath>";
        return 1;
    }

    BnWBMPreader reader;

    reader.openBMP(args[1]);
    reader.displayBMP();
    reader.closeBMP();
    
 

    return 0;
}
