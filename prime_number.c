#include<bits/stdc++.h>
int main()
{
    int n,count=0,i;
    std::cin>>n;
    
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
          {
              count++;
              break;
          }
    }
    if(count==0)
      std::cout<<"prime";
    else
      std::cout<<"not a prime";
    return 0;
}