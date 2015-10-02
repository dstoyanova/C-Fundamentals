//
//  Exercise-11.h
//  Assignment-1
//
//  Created by Desislava Stoyanova on 9/6/15.
//  Copyright (c) 2015 Desislava Stoyanova. All rights reserved.
//

#ifndef Assignment_1_Exercise_11_h
#define Assignment_1_Exercise_11_h

size_t numOfVisits(int* array,size_t size,int element) {
    int i;
    size_t br = 0;
    for (i=0; i<size; i++) {
        if (array[i] == element)
            br += 1;
    }
    return br;
}

void countingSort(int* array,size_t size) {
    size_t visitsOf0 = numOfVisits(array, size, 0);
    size_t visitsOf1 = numOfVisits(array, size, 1);
    int i;
    int j=0;
    for (i=0; i<size; i++) {
        if (i < visitsOf0) {
            array[i] = 0;
        }
        else if (i >= visitsOf0 && j < visitsOf1) {
            array[i] = 1;
            j++;
        }
        else {
            array[i] = 2;
        }
    }
}

/*
 
 int main(int argc, const char * argv[]) {
 printf("Number of inputs: ");
 int inputs;
 scanf("%d",&inputs);
 
 int* array = malloc(inputs*sizeof(int));
 
 int i;
 for (i=0; i<inputs; i++) {
 printf("Give number %d: ",i);
 scanf("%d",&array[i]);
 }
 
 countingSort(array, inputs);
 
 printf("Input when sorted: ");
 for (i=0; i<inputs; i++) {
 printf("%d\n",array[i]);
 }
 
 free(array);
 
 return 0;
 }
 
 */

#endif
