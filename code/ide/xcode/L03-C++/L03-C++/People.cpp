//
//  People.cpp
//  L01-C++
//
//  Created by Wanderkiss on 15/4/24.
//  Copyright (c) 2015年 Wanderkiss. All rights reserved.
//

#include "People.h"

People::People(){
    this->age = 10;
    this->sex = 1;
}


People::People(int age,int sex){
    this->age = age;
    this->sex = sex;
}
int People::getAge()
{
    return this->age;
}
int People::getSex()
{
    return this->sex;
}

void People::sayHello(){
    printf("Hello World1\n");
}