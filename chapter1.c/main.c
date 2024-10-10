//
//  main.c
//  chapter1.c
//
//  Created by Reece Hutchison on 2024-10-09.
//

#include <stdio.h>

int euclids_algorithm(int n, int m);
void swap_elements(char* arr);


int main(int argc, const char * argv[]) {
    
    char arr[]={'a', 'b', 'c', 'd'};
    
    for(int i=0; i<4; ++i) {
        printf("%c ", arr[i]);
    }
    printf("\n");

    swap_elements(arr);
    
    for(int i=0; i<4; ++i) {
        printf("%c ", arr[i]);
    }
    printf("\n");

    
    return 0;
}

// --- 1.1 Algorithms ---

/*  Euclids Algorithm
 
    E0. [Ensure m >= n.] If m < n, exchange m <-> n.
    E1. [Find remainder.] Divide m by n and let r be the remainder.
    E2. [Is it zero?] If r = 0, the algorithm terminates; n is the answer.
    E3. [Reduce] Set m <- n, n <- r, and go back to step E1.
 */

int euclids_algorithm(int n, int m) {
    
    if(n<=0||m<=0)
        return -1;
    
    int r=-1;
    
    if(m<n) {
        int temp=m;
        m=n;
        n=temp;
    }
    
    while(r!=0) {
        r=m%n;
        if(r==0)
            break;
        m=n;
        n=r;
    }
    
    return n;
}

// Excercises

// 1. [10]
void swap_elements(char* arr) {
    // (a, b, c, d) --> (b, c, d, a)
    
    char temp=arr[0];
    arr[0]=arr[3];
    arr[3]=temp;
    
    temp=arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
    
    temp=arr[1];
    arr[1]=arr[2];
    arr[2]=temp;
    
}

