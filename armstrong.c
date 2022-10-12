 #include <stdio.h>
/*Armstrong number is a number that is equal to the sum of cubes of its digits. 
For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.*/
int main()
{
    int n,sum=0;
    printf("Enter the number : ");
    scanf("%d", &n);
    int temp = n;

    while(n > 0)
    {
        int s = n % 10;
        sum += (s*s*s);
        n = n / 10;
    }

    if (temp == sum)
    {
        printf("This is an armstrong number.");
    }
    else
    {
        printf("This is not an armstrong number.");
    }

    return 0;
}
