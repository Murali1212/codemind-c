#include<bits/stdc++.h>
int main()
{
   int n,r,sum=0,temp;
    std::cin>>n;
    
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(sum==temp)
      std::cout<<"True";
    else
      std::cout<<"False";
    return 0;
}