//
//  main.cpp
//  CplusplusPersonalLessonsCS1521
//
//  Created by Rudolf Musika on 2/1/18.
//  Copyright © 2018 Rudolf Musika. All rights reserved.
//

#include <iostream>

#include <fstream>
#include <string>
#include "stats.hpp"

int main(){
    char ans1 = 'y';
    char ans2 = 'y';
    // Trial to create a character   char ch1 = ' ';
    double value ;
    stats data;
    while (ans1 == 'y' || ans1 == 'Y'){
        std::cout<<"Would you like to enter a value? 'y' or 'n'?";
        std::cin>>ans2;
        while(ans2 =='y'|| ans2 == 'Y'){
            std::cout<<"\n Enter a value ";
            std::cin>>value;
            /* Added Trial Code
             if (value == ch1){
             std::cout<<"\n Please enter a value: ";
             std::cin>>ans2;
             data.addNum(value);
             }
             else{
             std::cout<<"\n Can not execute, bye";
             }
             */
            data.addNum(value);
            std::cout<<"\n Would you like to enter another value? 'y' or 'n'?";
            std::cin>>ans2;
        }
        std::cout<<"\nTotal number of Values Entered is "<<data.numOfVal();
        std::cout<<"\nLast Value of Number Entered is "<<data.lastNumEntered();
        std::cout<<"\nSum of Values Entered is "<<data.sumAllNum();
        std::cout<<"\n Mean of Values Entered is "<<data.arithMean();
        std::cout<<"\nThe Minimum number of Entered is "<<data.minNum();
        std::cout<<"\nThe Maximum number of Entered is "<<data.maxNum();
        data.numClear();
        std::cout<<"\n Would you like to enter sequence 'y' or 'n': ";
        std::cin>>ans1;
    }
}
