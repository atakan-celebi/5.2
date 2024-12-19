#include <stdio.h>

int main(void) {
    int age[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};
    for (int i=0; i<21;i++) {
        if (age[i]>18) {
            printf("%d maggiorenne \n",age[i]);
        }
    }
}
