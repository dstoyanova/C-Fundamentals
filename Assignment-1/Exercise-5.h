//
//  Exercise-5.h
//  Assignment-1
//
//  Created by Desislava Stoyanova on 9/5/15.
//  Copyright (c) 2015 Desislava Stoyanova. All rights reserved.
//

#ifndef Assignment_1_Exercise_5_h
#define Assignment_1_Exercise_5_h

void funcExercise5() {
    char input;
    int num;
    do {
        printf("Give a number: ");
        scanf("%d",&num);
        int i;
        for (i=1; i<=num; i++) {
            printf("%d\n",i);
        }
        printf("Run again (y/n)? ");
        scanf("%s",&input);
    } while (input != 'n');
    printf("Exiting...\n");
}

#endif
