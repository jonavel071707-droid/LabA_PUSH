//CAÑETE, MA. JONAVEL C. DIT 1-2
#include <stdio.h>

int main()
{
    //while Loop
    int i = 1;
    printf("Numbers from 1 to 10 using while loop:\n");
    while (i <= 10) {
        printf("%d\n", i);
        i++;
    }

    //For Loop
    int p;
    printf("Even numbers from 2 to 20 using for loop:\n");
    for (p = 2; p <= 20; p += 2) {
        printf("%d\n", p);
    }

    //Do-While Loop
    printf("Numbers from 1 to 5 using do while loop:\n");
    int a = 1;
    do {
        printf("%d\n", a);
        a++;
    } while (a <= 5);

    return 0;
}
