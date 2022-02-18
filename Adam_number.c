#include<bits/stdc++.h>
int reverse(int);
int main()
{
    int n,rev,temp;
    std::cin>>n;
    rev=reverse(n);
    temp=reverse(rev*rev);
    if(n*n==temp)
      std::cout<<"True";
    else
      std::cout<<"False";
      
    return 0;
}
int reverse(int x)
{
    int r,sum=0;
     while(x>0)
     {
         r=x%10;
         sum=sum*10+r;
         x=x/10;
     }
     return sum;
}
