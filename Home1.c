#include<stdio.h>
#include<stdbool.h>
#include<stdbool.h>
#include<math.h>
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
int main()
{
    int inp1;
    printf("Enter a number for numberTransformer function\n");
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
    printf("\nEnter an integer for reverseNum function\n");
    scanf("%d",&n3);
    printf("%d",reverseNum(n3));
    int inp2[5]={};
    printf("\nEnter 5 integers for smallerThanIndex function\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&inp2[i]);
    }
    int res1=smallerThanIndex(inp2);
    printf("%d",res1);
    int inp3[6]={};
    printf("\nEnter 6 integers for arrayDetails function\n");
    for(int i=0;i<6;i++)
    {
        scanf("%d",&inp3[i]);
    }
    arrayDetails(inp3);
}


/*https://www.geeksforgeeks.org/nearest-prime-less-given-number-n/*/
