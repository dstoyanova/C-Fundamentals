//
//  Exercise-10.h
//  Assignment-1
//
//  Created by Desislava Stoyanova on 9/5/15.
//  Copyright (c) 2015 Desislava Stoyanova. All rights reserved.
//

#ifndef Assignment_1_Exercise_10_h
#define Assignment_1_Exercise_10_h

void bubbleSort(char** array,size_t size,size_t maxStringLen) {
    int i,j;
    char* temp = malloc(maxStringLen*sizeof(char));
    for (i=0; i < size - 1; i++) {
        for (j=0; j < size - i - 1; j++) {
            if (strcmp(array[j], array[j+1]) > 0) {
                strcpy(temp,array[j]);
                strcpy(array[j], array[j+1]);
                strcpy(array[j+1], temp);
            }
        }
    }
    free(temp);
}

/* 
 
 int main(int argc, const char * argv[]) {
 printf("Number of strings: ");
 int numberOfStrings;
 scanf("%d",&numberOfStrings);
 
 int maxLength;
 printf("Maximum string length: ");
 scanf("%d",&maxLength);
 
 char** array = malloc(numberOfStrings*sizeof(char*));
 
 int i;
 for (i=0; i<numberOfStrings; i++) {
 printf("Give string %d: ",i);
 array[i] = malloc(maxLength*sizeof(char));
 scanf("%s",array[i]);
 }
 
 bubbleSort(array, numberOfStrings, maxLength);
 
 printf("Input when sorted:\n");
 
 for (i=0; i<numberOfStrings; i++) {
 printf("%s\n",array[i]);
 }
 
 for (i=0; i<numberOfStrings; i++) {
 free(array[i]);
 }
 
 free(array);
 
 return 0;
 }
 
 */

#endif
