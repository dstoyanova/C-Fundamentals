//
//  Exercise-8.h
//  Assignment-1
//
//  Created by Desislava Stoyanova on 9/5/15.
//  Copyright (c) 2015 Desislava Stoyanova. All rights reserved.
//

#ifndef Assignment_1_Exercise_8_h
#define Assignment_1_Exercise_8_h

int countZeros(int* array,size_t size) {
    int br = 0;
    int i;
    for (i=0; i<size; i++) {
        if (array[i] == 0) {
            br = br + 1;
        }
    }
    return br;
}

void printArray(int* array,size_t size) {
    int i;
    printf("{ ");
    for (i=0; i<size; i++) {
        if (i == size-1) {
            printf("%d ",array[i]);
        }
        else {
            printf("%d, ",array[i]);
        }
    }
    printf("}");
}

void tripleArrayElements(int* array,size_t size) {
    int i;
    for (i=0; i<size; i++) {
        array[i] = array[i] * 3;
    }
    printf("Tripled array: ");
    printArray(array, size);
}

#endif
