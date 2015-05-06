//
//  main.c
//  PointerDrills
//
//  Created by Alain  on 2015-05-06.
//  Copyright (c) 2015 Alain . All rights reserved.
//

#include <stdio.h>

int main()
{
    int a = 13;
    int b = 5;
    int c = 10;
    
    int *pointer1 = &a;
    int *pointer2 = &b;
    int *pointer3 = &c;
    int *pointer4 = &c;
    
    *pointer1 *= 2; // need the value for the calculation hence *pointer
    
    *pointer3 += 1;
    
    pointer4 = pointer2; // don't need the value here
    
    *pointer4 = *pointer4 + 4;
    
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    return 0;
}

// when assigning variables the right side becomes stored in the left, so *pointer4 = *pointer2 makes c=5, and an output of 9, which is which it was in the wrong place before
