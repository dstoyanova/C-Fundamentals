//
//  Exercise-17.h
//  Assignment-1
//
//  Created by Desislava Stoyanova on 9/6/15.
//  Copyright (c) 2015 Desislava Stoyanova. All rights reserved.
//

#ifndef Assignment_1_Exercise_17_h
#define Assignment_1_Exercise_17_h

int countBitsSet(int number) {
    int br = 0;
    while (number != 0) {
        if (number % 2 == 1)
            br += 1;
        number = number / 2;
    }
    return br;
}

#endif
