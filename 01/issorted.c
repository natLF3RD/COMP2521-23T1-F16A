
#include <stdio.h>

#define bool int

bool isSorted(int *a, int n) {

    for (int i=0; i < n-1; i++) {
        
        //compare a[i] and a[i+1]
        if (a[i] > a[i+1]) 
            // not
            return 0;
        a++;
    }

    return 1;
}

int main(void) {
    int nums[5] = {0,1,0,3,4};
    int length = 5;

    printf("%d\n", isSorted(nums, length));

    return 0;
}