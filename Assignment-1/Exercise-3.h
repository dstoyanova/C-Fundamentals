//
//  Exercise-3.h
//  Assignment-1
//
//  Created by Desislava Stoyanova on 9/5/15.
//  Copyright (c) 2015 Desislava Stoyanova. All rights reserved.
//

#ifndef Assignment_1_Exercise_3_h
#define Assignment_1_Exercise_3_h

void isZero() {
    int num;
    printf("Give an integer: ");
    scanf("%d",&num);
    if (num == 0) {
        printf("The number you entered equals zero\n");
    }
    else {
        printf("The number you entered does not equal zero\n");
    }
}

void getLarger() {
    float a,b;
    printf("Give two floats: ");
    scanf("%f",&a);
    scanf("%f",&b);
    if (a > b) {
        printf("%f is the largest\n",a);
    }
    else {
        printf("%f is the largest\n",b);
    }
}

void even() {
    int a;
    printf("Give an integer: ");
    scanf("%d",&a);
    if (a % 2 == 0) {
        printf("Result is: %d\n",a/2);
    }
    else {
        printf("Result is: %d\n",a*3);
    }
}

void areEqual() {
    int a,b,c;
    printf("Give three integers: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a == b) {
        printf("Some numbers are equal\n");
    }
    else if (b == c){
        printf("Some numbers are equal\n");
    }
    else if (c == a){
        printf("Some numbers are equal\n");
    }
    else {
        printf("All are unique\n");
    }
}

#endif
