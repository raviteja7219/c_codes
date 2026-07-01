// This is the logic to find 2nd largest and largest integer of an array with their indexs

#include <stdio.h>

int main() {
    int a[5] = {124,342,232,764,45};
    int largest = a[0];
    int second_largest = a[0];
    int l_index = 0;
    int s_index = 0;
   
    for (int i=0;i<5;i++) {
        if (a[i] > largest) {
            s_index = l_index;
            l_index = i;
            second_largest = largest;
            largest = a[i];
        }
        else if (a[i] > second_largest && a[i] != largest) {
            s_index = i;
            second_largest = a[i];
        }
    }
    printf("largest = %d\n",largest);
    printf("second_largest = %d\n",second_largest);
    printf("largest_index = %d\n",l_index);
    printf("second_index = %d\n",s_index);
    return 0;
}
