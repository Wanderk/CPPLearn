//
//  main.cpp
//  L02-C++
//
//  Created by Wanderkiss on 15/4/24.
//  Copyright (c) 2015年 Wanderkiss. All rights reserved.
//

#include <iostream>
#include "People.h"
/**
 *  如果使用了namespace,直接new
 */
using namespace jikexueyuan;
int main(int argc, const char * argv[]) {
    // insert code here...
    People *p = new People();
    p->sayHello();


    return 0;
}

//int main(int argc, const char * argv[]) {
//    // insert code here...
//    jikexueyuan::People *p = new jikexueyuan::People();
//    p->sayHello();
//    
//    
//    return 0;
//}
