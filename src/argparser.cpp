#include <iostream>
#include <cmath>

#include "argparser.h"

bool is_valid_load_rate(char* argv[]){
    int load_rate;
    try{
        load_rate = round(std::stoi(argv[1]));

        if(load_rate > 101 || load_rate < 0){
            throw std::out_of_range("value needs to be between 1 and 100");
            return false;
        }

    }catch(const std::invalid_argument& ia){
        std::cerr << "Invalid argument: " << ia.what() << "\n";
        return false;
    }catch(const std::out_of_range& oor){
        std::cerr << "Invalid argument: " << oor.what() << "\n";
        return false;
    }
    return true;
}

int get_load_rate(char* argv[]){
    return round(std::stoi(argv[1]));
    
}