<!--
NOTES:
This README is an example README for CS332/532 HW#1.
-->

# Compilation Instructions
Compile the code and it will ask you to provide the input. Based on the input given, it will trigger the numberTransformer function and prints the appropiate output.

And then it will ask you to provide an integer for UABNumber function. 
Based on the input given, it will print True if the given integer is UABNumber else it will print False.

And then it will ask you to enter an integer for reverseNum function. 
This code will reverse the given integer and prints the reversed number.

And then it will ask you to enter 5 integers for smallerthanindex function. 
Based on the input given, it will count the number of integers in the array whose value is smaller than index and print the total as output.

And then it will ask you to enter 6 integers for arrayDetails function. 
Based on the input given, the code will print the minimum value, the minimum value’s index, the mean, the maximum value, and the maximum value’s index.

<!--Start of the code-->
#include<stdio.h>
#include<stdbool.h>
#include<stdbool.h>
#include<math.h>
<!--Logic to check if a number is prime number or not-->
int checkPrimee(int n)
{
    int res=0;
    if(n==0||n==1)
    {
        res=1;
    }
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            res=1;
            break;
        }
    }
    return res;
}
<!--Prime Number logic ends here-->
<!--Logic to check if a number is power of 2-->
bool powerOfTwo(int n)
{
    if (n == 0)
        return 0;
    while (n != 1) {
        if (n % 2 != 0)
            return 0;
        n = n / 2;
    }
    return 1;
}
<!--Power of 2 logic ends here-->
<!--Logic to find the nearest prime which is less than given number-->
int nearestPrime(int n)
{
    if (n & 1)
        n -= 2;
    else
        n--;

    int i, j;
    for (i = n; i >= 2; i -= 2) {
        if (i % 2 == 0)
            continue;
        for (j = 3; j <= sqrt(i); j += 2) {
            if (i % j == 0)
                break;
        }
        if (j > sqrt(i))
            return i;
    }
    return 2;
}
<!--Nearest prime logic ends here-->
<!--Logic to calculate sum of digits-->
int sumOfDigits(int n)
{
    int sumofdigits=0,m;
    int a=n;
    while(a>0)
    {
        m=a%10;
        sumofdigits=sumofdigits+m;
        a=a/10;
    }
    return sumofdigits;
}
<!--Sum of digits logic ends here-->
<!--numberTramsformer function driver code-->
void numberTransformer(int n)
{
    char str[1000];
    if(n%3==0 && n%5==0)
    {
        printf("UAB CS 332&532");
        return;
    }
    if(n!=3)
    {
        if(n!=5)
        {
            if(checkPrimee(n)!=1)
            {
                printf("Go Blazers");
                return;
            }
        }
    }
    if(powerOfTwo(n)==true)
    {
        int p=nearestPrime(n);
        int r=p+n;
        sprintf(str,"%d",r);
        printf("%s",str);
        return;
    }
    int sum=sumOfDigits(n);
    if(sum%3==0 && sum>=3)
    {
        printf("CS");
        return;
    }
    else
    {
        char str1[1000];
        int sum1=sumOfDigits(n);
        int k=sum1*sum1;
        sprintf(str1,"%d",k);
        printf("%s",str1);
    }
}
<!--End of numberTransformer function-->

<!--UABNumber Function driver code-->
bool UABNumber()
{
    int n2,i,sum=0;
    printf("\nEnter an integer for UABNumber function\n");
    scanf("%d",&n2);
    for(i=1;i<n2;i++)
    {
        if(n2%i==0)
        {
            sum+=i;
        }
    }
    if(n2==sum)
    {
        return true;
    }
    else
    {
        return false;
    }
}
<!--UABNumber Function ends here-->

<!--reverseNum function Logic-->
int reverseNum(int n3)
{
    int a,rev=0;
    while(n3>0)
    {
        a=n3%10;
        rev=rev*10+a;
        n3=n3/10;
    }
    return rev;
}
<!--reverseNum Function ends here-->

<!--smallerThanIndex function logic-->
int smallerThanIndex(int inp_arr[])
{
    int count=0;
    for(int i=0;i<5;i++)
    {
        if(inp_arr[i]<i)
        {
            count+=1;
        }
    }
    return count;
}
<!--smallerThanIndex function logic ends here-->

<!--arrayDetails function logic-->
void arrayDetails(int inp_arr[])
{
    int min=inp_arr[0],max=inp_arr[0];
    int min_i=0,max_i=0,sum=inp_arr[0];
    for(int i=1;i<6;i++)
    {
        sum+=inp_arr[i];
        if(inp_arr[i]<min)
        {
            min=inp_arr[i];
            min_i=i;
        }
    }
    double mean=sum/(float)6;
    for(int i=1;i<6;i++)
    {
        if(inp_arr[i]>max)
        {
            max=inp_arr[i];
            max_i=i;
        }
    }
    printf("[%d,%d,%.2f,%d,%d]",min,min_i,mean,max,max_i);
}

<!--arrayDetails function logic ends here-->

<!--Main Function-->
int main()
{
    int inp1;
     <!--It will ask you to enter a number-->
    printf("Enter a number for numberTransformer function\n");
     <!--To read input-->
    scanf("%d",&inp1);
    numberTransformer(inp1);
    bool res;
    res=UABNumber();
    if(res==true)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    int n3;
     <!--It will ask you to enter a number-->
    printf("\nEnter an integer for reverseNum function\n");
    scanf("%d",&n3);
    printf("%d",reverseNum(n3));
    int inp2[5]={};
     <!--It will ask you to enter 5 integers-->
    printf("\nEnter 5 integers for smallerThanIndex function\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&inp2[i]);
    }
    int res1=smallerThanIndex(inp2);
    printf("%d",res1);
    int inp3[6]={};
     <!--It will ask you to enter 6 integers-->
    printf("\nEnter 6 integers for arrayDetails function\n");
    for(int i=0;i<6;i++)
    {
        scanf("%d",&inp3[i]);
    }
    arrayDetails(inp3);
}
<!-- End of the code-->


# My Files
## Home1.c

# Output screenshots
![Alt text](image.png)

References
/*https://www.geeksforgeeks.org/nearest-prime-less-given-number-n/*/

# Github Repository Link:
https://github.com/Prasanth-dev11/sp_homework1