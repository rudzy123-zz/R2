//
//  stats.cpp
//  CplusplusPersonalLessonsCS1521
//
//  Created by Rudolf Musika on 2/1/18.
//  Copyright © 2018 Rudolf Musika. All rights reserved.
//

#include "stats.hpp"
#include <iostream>

stats::stats(){
    numValues =0;
    last =0;
    sum = 0;
    mean = 0;
    min=0;
    max=0;
    //constructor Think Hard here
}
void stats::addNum(double i){
    if (numValues ==0){
        last = i;
        sum =i;
        mean =i;
        max = i;
        min = i;
        numValues++;
    }
    else{
        numValues++;
        last = i;
        sum+=i;
        mean = sum/numValues;
        if(i > max)  max = i;
        if(i < min) min = i;
    }
}

int stats::numOfVal(){
    return numValues;
}
double stats::lastNumEntered(){
    return last;
}
double stats::sumAllNum(){
    return sum;
}
double stats::arithMean(){
    return mean;
}
double stats::minNum(){
    return min;
}
double stats::maxNum(){
    return max;
}
void stats::numClear(){
    numValues =0;
    last =0;
    sum = 0;
    mean = 0;
    min=0;
    max=0;
}

