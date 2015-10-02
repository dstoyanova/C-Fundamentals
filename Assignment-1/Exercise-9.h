//
//  Exercise-9.h
//  Assignment-1
//
//  Created by Desislava Stoyanova on 9/5/15.
//  Copyright (c) 2015 Desislava Stoyanova. All rights reserved.
//

#ifndef Assignment_1_Exercise_9_h
#define Assignment_1_Exercise_9_h

size_t lenght(char* str) {
    size_t br = 0;
    size_t i = 0;
    for (i=0; str[i] != '\0'; i++) {
        br = br + 1;
    }
    return br;
}

void append(char* str1,char* str2) {
    size_t newSize = lenght(str1) + lenght(str2) + 1;
    char result[newSize];
    int i,j;
    for (i=0; str1[i] != '\0'; i++) {
        result[i] = str1[i];
    }
    for (j=0; str2[j] != '\0'; j++) {
        result[i+j] = str2[j];
    }
    result[i+j] = '\0';
    str1 = result;
    printf("Result of append: %s\n",str1);
}

#endif
