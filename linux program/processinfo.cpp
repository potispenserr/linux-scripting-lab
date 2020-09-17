#include "stdio.h"
#include "stdlib.h"
#include <iostream>
#include <string>
#include <vector>
int main(int argc, const char* argv[])
{
    if(argc <= 1){
        std::cout << "What are you doing with your life? Stop wasting it away by doing stupid shit. Try again and write more arguments" << "\n";
    }
        else{
            std::vector<std::string> argList;
        for(int i=0;i<argc;i++){
            argList.push_back(argv[i]);
        }
        std::cout << "ArgC " << argc << " ArgV " << argv << "\n";
        std::cout << "YO" << "\n"; 
        if(argc >= 4){
            std::cout << "What are you doing with your life? Stop wasting it away by doing stupid shit. Try again and write less arguments" << "\n";
            
        }
        else {
            for(int i = 0; i < argc; i++){
            std::cout << " ArgV" << i << " " << argList[i] << "\n";
            }
            /*switch(*argv[0]) {

            }*/
            std::string arg1(argv[1]);
            std::cout << arg1 << "\n";
            if(arg1 == "-i"){
                system("hwinfo");
                system("lscpu");
                system("uname -a");

            }
            else
            {
                std::cout << "Argv was " << argv[1] << "\n";
            }
            
        }
        
    }
    
}