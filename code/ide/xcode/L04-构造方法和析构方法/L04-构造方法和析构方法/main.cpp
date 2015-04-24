//
//  main.cpp
//  L04-构造方法和析构方法
//
//  Created by Wanderkiss on 15/4/24.
//  Copyright (c) 2015年 Wanderkiss. All rights reserved.
//

#include <iostream>
class Object{
    
public:
    Object(){
        printf("Creat Object\n");
    };
    ~Object(){
        printf("Delete Object");
    }
    
};
int main(int argc, const char * argv[]) {
  //只要使用new关键字，就执行构造方法
    Object *obj = new Object;
    
    delete obj;
    return 0;
}
