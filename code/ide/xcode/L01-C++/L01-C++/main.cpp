//
//  main.cpp
//  L01-C++
//
//  Created by Wanderkiss on 15/4/24.
//  Copyright (c) 2015年 Wanderkiss. All rights reserved.
//

#include <iostream>
#include "People.h"
//class People {
//    
//    
//public:
//    void sayHello(){
//        printf("Hello Cpp\n");
//    }
//};

int main(int argc, const char * argv[]) {
    
    People *p = new People();
    p->sayHello();
    delete p;
    
    return 0;
}
