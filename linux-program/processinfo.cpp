#include "stdlib.h"
#include <iostream>
#include <string>
#include <vector>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <math.h>
#include <thread>
#include <functional>
void calculate(){
    std::cout << "My threadID is: " << std::this_thread::get_id() << "\n";
    double sum;
    double i;
    double j;
    for(i = 1; i < 50001; i++){
        for(j = 1; j < i; j++){
            sum += sqrt(i * j);
        }
    }
    std::cout << "Sum is: " << sum << std::endl;
}


int main(int argc, const char* argv[])
{
    if(argc <= 1){
        std::cout << "What are you doing with your life? Stop wasting it away by doing stupid things. Try again and write more arguments" << "\n";
    }
        else{
            std::vector<std::string> argList;
        for(int i=0;i<argc;i++){
            argList.push_back(argv[i]);
        }
        std::cout << "ArgC " << argc << " ArgV " << argv << "\n";
        std::cout << "YO" << "\n"; 
        if(argc >= 4){
            std::cout << "What are you doing with your life? Stop wasting it away by doing stupid things. Try again and write less arguments" << "\n";
            
        }

        else {
            for(int i = 0; i < argc; i++){
            std::cout << " ArgV" << i << " " << argList[i] << "\n";
            }

            //If first argument is -i(processor info)
            if(argList[1] == "-i"){
                system("ip addr show");
                system("lscpu");
                system("uname -a");
                system("df -ah");

            }

            //If first argument is -f(fork processes)
            else if(argList[1] == "-f"){
                
                //error checking
                if (argc == 2){
                    std::cout << "you didn't type in a number for the amount of forks, try again" << "\n";
                }
                else if(std::stoi(argList[2]) <= 0){
                    std::cout << "haha very funny, try again" << "\n";
                }
                else{

                //creates a vector for all pid:s and populates it
                double sum;
                std::vector<int> pidList;
                pidList.resize(std::stoi(argList[2]));
                for(int i = 0; i < pidList.size() - 1; i++){
                    pidList[i] = fork();
                    std::cout << "My PID is: " << pidList[i] << "\n";
                }                
                
                //the actual calculation
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
            //if first argument is -t(create threads)
            else if(argList[1] == "-t"){
                int userinput = stoi(argList[2]);
                std::vector<std::thread> threadList;
                int numOfThreads = std::thread::hardware_concurrency();
                if(userinput > numOfThreads){
                    std::cout << "Number of threads requested exceedes maximum threads supported. Requested: " << argList[2] << " Max number of threads: " << numOfThreads << std::endl;  
                    //threadList.reserve(numOfThreads);
                }

                else{
                    threadList.reserve(userinput);
                    std::cout << "Max number of threads the processor supports: " << numOfThreads << std::endl;
                    //populates the vector with threads doing the calculation
                    for(int i = 0; i < userinput; i++){
                        std::cout << "Index is: " << i << std::endl;
                        threadList.push_back(std::thread(calculate));
                    }
                    std::cout << "exiting" << std::endl;
                    //waits for all the threads to finish before exiting
                    for(int i = 0; i < userinput; i++){
                        threadList[i].join();
                }
                }
                

            }
            
        }
        
    }
    
}
