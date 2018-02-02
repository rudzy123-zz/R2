//
//  stats.hpp
//  CplusplusPersonalLessonsCS1521
//
//  Created by Rudolf Musika on 2/1/18.
//  Copyright © 2018 Rudolf Musika. All rights reserved.
//

#ifndef stats_hpp
#define stats_hpp

#include <stdio.h>
class stats
{
private:
    int numValues;
    double last,sum,mean,min,max; //declaration of the double variables
    
public:
    stats();//default constructor
    void addNum(double i);
    int numOfVal();
    double lastNumEntered();
    double sumAllNum();
    double arithMean();
    double minNum();
    double maxNum();
    void numClear();
};

#endif /* stats_hpp */
