#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    // TODO: Implement your solution here and return proper value
    if(command == "add"){
        return to_string(first + second);
        }else if(command == "subtract"){
        return to_string(first - second);
        }else if(command == "multiply"){
        return to_string(first * second);
        }else if(command == "divide"){
        if(second != 0){
            return to_string(first / second);}
        else
        {return "ERROR. Division by 0";}
    } else {
        return "Invalid data";};
}