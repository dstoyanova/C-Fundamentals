//
//  Exercise-7.h
//  Assignment-1
//
//  Created by Desislava Stoyanova on 9/5/15.
//  Copyright (c) 2015 Desislava Stoyanova. All rights reserved.
//

#ifndef Assignment_1_Exercise_7_h
#define Assignment_1_Exercise_7_h

int addition(int a,int b) {
    return a + b;
}

int multiplication(int a,int b) {
    return a * b;
}

int substraction(int a,int b) {
    return a - b;
}

int division(int a,int b) {
    if (b == 0) {
        return 0;
    }
    
    return a / b;
}

#endif
