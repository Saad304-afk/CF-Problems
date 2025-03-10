#include <stdio.h>
//finding out the mechanism of postfix ;by SAAD.
int main() {
    int m=6 , y;
    y = m--;  // Postfix: use m first, then decrement

    printf("Postfix decrement:\n");
    //scanf("%d",&m);
    printf("m = %d, y = %d\n", m, y);

    return 0;
}

