//
//  People.h
//  L01-C++
//
//  Created by Wanderkiss on 15/4/24.
//  Copyright (c) 2015年 Wanderkiss. All rights reserved.
//
//sex 1 == 男   2 = 女
#ifndef __L01_C____People__
#define __L01_C____People__

#include <stdio.h>

class People {
    
private:
    int age;
    int sex;
    
public:
    People();
    People(int age,int sex);
    int getAge();
    int getSex();
    void sayHello();

};
#endif /* defined(__L01_C____People__) */
