//
//  Exercise-4.h
//  Assignment-1
//
//  Created by Desislava Stoyanova on 9/5/15.
//  Copyright (c) 2015 Desislava Stoyanova. All rights reserved.
//

#ifndef Assignment_1_Exercise_4_h
#define Assignment_1_Exercise_4_h

void printAllEvenNumbers() {
    printf("Even numbers between 0 and 40:\n");
    for (int i=0; i<=40; i+=2) {
        printf("%d ",i);
    }
    printf("\n");
}

void printRows() {
    printf("Numbers 1 to 100:\n");
    int max_width = 2;
    for (int i=1; i<101; i+=10) {
        for (int j=i; j<i+10; j++) {
            printf("%*d ",max_width,j);
        }
        printf("\n");
    }
}

void square() {
    int num;
    do {
        printf("Give a number: ");
        scanf("%d",&num);
        if (num != 0) {
            printf("The square of %d is %d\n",num,num*num);
        }
        else {
            printf("You entered zero.\n");
        }
    } while (num != 0);
}

#endif
