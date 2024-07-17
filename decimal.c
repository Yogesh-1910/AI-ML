//AUTHOR: YOGESH S 1GA22AI063
//DATE:4/07/2024 11:30AM
//MODIFIED DATE: 4/07/2024
/*
START CODE
------------------------------------------
*/
#include <stdio.h>
int main() {
    int decimalNum,c;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);
    while(decimalNum> 0)
    {
        decimalNum/=2;
        c++;
    }
    printf("Number of bits required: %d\n", c);
    return 0;
}
/*
END CODE
---------------------------------------
*/
