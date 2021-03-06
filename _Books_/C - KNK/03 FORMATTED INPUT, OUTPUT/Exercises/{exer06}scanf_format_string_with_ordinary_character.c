/* Show how to modify the addfrac.c program of Section 3.2 so that the user is allowed to enter fractions that contain spaces before and after each / character. */

#include <stdio.h>

int main() {
    int nom1, denom1, nom2, denom2,
        result_nom, result_denom;

    printf("\n=== Original ===\n");
    printf("Enter first fraction: ");
    scanf("%d/%d", &nom1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d/%d", &nom2, &denom2);

    result_nom = nom1 * denom2 + nom2 * denom1;
    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_nom, result_denom);

    ///////////////////////

    printf("\n=== Answer ===\n");
    printf("Enter first fraction: ");
    scanf("%d / %d", &nom1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d / %d", &nom2, &denom2);

    result_nom = nom1 * denom2 + nom2 * denom1;
    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_nom, result_denom);

    return 0;
}

/* example 1

=== Original ===
Enter first fraction: 5 /6
Enter second fraction: The sum is 830/1850283808

=== Answer ===
Enter first fraction: Enter second fraction: The sum is 830/1850283808

 */

/* example 2

=== Original ===
Enter first fraction: 5/6
Enter second fraction: 3/4
The sum is 38/24

=== Answer ===
Enter first fraction: 5 / 6
Enter second fraction: 3 / 4
The sum is 38/24

 */