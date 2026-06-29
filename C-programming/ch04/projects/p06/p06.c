#include <stdio.h>

int main(void)
{
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12;
    int first_sum, second_sum, total, check_digit;

    printf("Enter the first 12 digits of an EAN: ");

    /* Read 12 consecutive digits individually */
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
          &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);

    /* * EAN Algorithm:
     * first_sum: Add the 2nd, 4th, 6th, 8th, 10th, and 12th digits
     * second_sum: Add the 1st, 3rd, 5th, 7th, 9th, and 11th digits
     */
    first_sum = i2 + i4 + i6 + i8 + i10 + i12;
    second_sum = i1 + i3 + i5 + i7 + i9 + i11;

    total = (first_sum * 3) + second_sum;
    check_digit = 9 - ((total - 1) % 10);

    printf("Check digit: %d\n", check_digit);

    return 0;
}
