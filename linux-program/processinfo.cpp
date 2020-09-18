#include "stdio.h"
#include "stdlib.h"
#include <iostream>
#include <string>
#include <vector>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <math.h>
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

            //If first argument is -i(processor info)
            if(argList[1] == "-i"){
                system("hwinfo");
                system("lscpu");
                system("uname -a");

            }
            else if(argList[1] == "-f"){
                
                if (argc == 2){
                    std::cout << "you didn't type in a number for the amount of forks, try again" << "\n";
                }
                else if(std::stoi(argList[2]) <= 0){
                    std::cout << "haha very funny, try again" << "\n";
                }
                else{

                
                double sum;
                std::vector<int> pidList;
                pidList.resize(std::stoi(argList[2]));
                for(int i = 0; i < pidList.size() - 1; i++){
                    pidList[i] = fork();
                    std::cout << "My PID is: " << pidList[i] << "\n";
                }                
                /*if(pid > 0){
                    std::cout << "I am: First Parent" << "\n";
                }
                else if(pid == 0){
                    std::cout << "I am: First Child"  << "\n";
                }*/
                
                double i;
                double j;
                for(i = 1; i < 50001; i++){
                    for(j = 1; j < i; j++){
                        sum += sqrt(i * j);
                    }                    
                }
                for(int k = 0; k < pidList.size() - 1; k++){
                    std::cout << "Finished loop with sum of: " << sum << " and pid " << pidList[k] << "\n"; 
                }
                
                




                }

            }
            
        }
        
    }
    
}