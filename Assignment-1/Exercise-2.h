//
//  Exercise-2.h
//  Assignment-1
//
//  Created by Desislava Stoyanova on 9/5/15.
//  Copyright (c) 2015 Desislava Stoyanova. All rights reserved.
//

#ifndef Assignment_1_Exercise_2_h
#define Assignment_1_Exercise_2_h

void funcInt() {
    int a,b;
    printf("Give two integers: ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("You entered %d and %d, their sum is %d \n",a,b,a+b);
}

void funcFloat() {
    float a,b;
    printf("Give two floats: ");
    scanf("%f",&a);
    scanf("%f",&b);
    printf("You entered %.2f and %.2f, their product is %.2f \n",a,b,a*b);
}

void funcString() {
    char str[10];
    printf("Give a string: ");
    scanf("%s",str);
    printf("%s %s \n",str,str);
}

#endif
