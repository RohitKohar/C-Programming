// A cloth shop during festival seasons offers a discount of 10% on all purchases made in that shop.
// The bill amount for a customer is given as Rs. 1000.5. Write a program to calculate and display
// the discount, amount after discount.

#include<stdio.h>
void main()
{
    float discount, amountAfterDiscount;
    discount=(10*1000.5)/100;
    amountAfterDiscount=1000.5-discount;
    printf("The discout amount is: %.2f\n", discount);
    printf("The amount after discout is: %.2f", amountAfterDiscount);
}