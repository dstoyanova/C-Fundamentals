//
//  Exercise-13.h
//  Assignment-1
//
//  Created by Desislava Stoyanova on 9/5/15.
//  Copyright (c) 2015 Desislava Stoyanova. All rights reserved.
//

#ifndef Assignment_1_Exercise_13_h
#define Assignment_1_Exercise_13_h

int fibLoop(int n) {
    int first = 1;
    int second = 1;
    int fibbonachi = 0;
    
    if (n == 1 || n == 2) {
        fibbonachi = 1;
    }
    else {
        int i;
        for (i=3; i<=n; i++) {
            fibbonachi = first + second;
            first = second;
            second = fibbonachi;
        }
    }
    
    return fibbonachi;
}

#endif
