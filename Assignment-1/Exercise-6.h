//
//  Exercise-6.h
//  Assignment-1
//
//  Created by Desislava Stoyanova on 9/5/15.
//  Copyright (c) 2015 Desislava Stoyanova. All rights reserved.
//

#ifndef Assignment_1_Exercise_6_h
#define Assignment_1_Exercise_6_h

float getMin(float a,float b) {
    if (a <= b) {
        return a;
    }
    
    return b;
}

float getMinOf4(float a,float b,float c,float d) {
    return getMin(getMin(a, b), getMin(c, d));
}

float getMax(float a,float b) {
    if (a >= b) {
        return a;
    }
    
    return b;
}

float getMaxOf4(float a,float b,float c,float d) {
    return getMax(getMax(a, b), getMax(c, d));
}

float getSumOf4(float a,float b,float c,float d) {
    return a+b+c+d;
}

#endif
