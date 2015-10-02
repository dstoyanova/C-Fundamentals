//
//  Exercise-16.h
//  Assignment-1
//
//  Created by Desislava Stoyanova on 9/5/15.
//  Copyright (c) 2015 Desislava Stoyanova. All rights reserved.
//

#ifndef Assignment_1_Exercise_16_h
#define Assignment_1_Exercise_16_h

void op_double(int* a) {
    *a = (*a)*2;
}

void op_reset(int* a) {
    *a = 0;
}

void op_invert(int* a) {
    *a = -(*a);
}

void applyTo(void (*func)(int*), int* tab, int size) {
    int i;
    for (i=0; i<size; i++) {
        func(tab+i);
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
 
 int *copy = malloc(inputs*sizeof(int));
 
 int j;
 for (j=0; j<inputs; j++) {
 copy[j] = array[j];
 }
 
 printf("Result of applying op_double: ");
 applyTo(op_double, array, inputs);
 printArray(array, inputs);
 printf("\n");
 printf("Result of applying op_reset: ");
 applyTo(op_reset, array, inputs);
 printArray(array, inputs);
 printf("\n");
 printf("Result of applying op_invert: ");
 applyTo(op_invert, copy, inputs);
 printArray(copy, inputs);
 printf("\n");
 
 free(array);
 free(copy);
 
 return 0;
 }
 
 */


#endif
