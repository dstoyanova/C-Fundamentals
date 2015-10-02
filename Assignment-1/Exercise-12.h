//
//  Exercise-12.h
//  Assignment-1
//
//  Created by Desislava Stoyanova on 9/5/15.
//  Copyright (c) 2015 Desislava Stoyanova. All rights reserved.
//

#ifndef Assignment_1_Exercise_12_h
#define Assignment_1_Exercise_12_h

int fib(int n) {
    if (n==1 || n==2) {
        return 1;
    }
    
    return fib(n-1) + fib(n-2);
}

#endif
