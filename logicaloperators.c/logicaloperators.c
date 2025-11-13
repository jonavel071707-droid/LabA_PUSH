//CAÑETE, MA. JONAVEL C. DIT 1-2
#include <stdio.h>

int main()
{
    //Logical Operators
    int priceofcoffee = 100;
    int priceofmilktea = 80;

if ((priceofcoffee > priceofmilktea) && (priceofcoffee < 350)) {
        printf("Coffee is more expensive than milk tea and still affordable.\n");
    } else {
        printf("Coffee is either cheaper than milk tea or too expensive.\n");
    }

    // OR operator
    if ((priceofcoffee > 67) || (priceofcoffee < 200)) {
        printf("Coffee price meets at least one condition (above 67 or below 200).\n");
    } else {
        printf("Coffee price does not meet any of the conditions.\n");
    }

    // NOT operator
    if (!(priceofcoffee <= 80)) {
        printf("Coffee price is greater than 80.\n");
    } else {
        printf("Coffee price is 80 or less.\n");
    }
    //Assignment Operators
         printf("Assignment Operators\n");
    
    priceofcoffee += 20;
    printf("Updated value of priceofcoffee using (+= 20): %d\n", priceofcoffee);

    priceofmilktea -= 10;
    printf("Updated value of priceofmilktea using (-= 10): %d\n", priceofmilktea);

    priceofcoffee *= 2;
    printf("Updated value of priceofcoffee using (*= 2): %d\n", priceofcoffee);

    priceofmilktea /= 2;
    printf("Updated value of priceofmilktea using (/= 2): %d\n", priceofmilktea);

    return 0;
}
