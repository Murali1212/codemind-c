#include<bits/stdc++.h>
int main()
{
    int n,sum=0,r,f=0;
    std::cin>>n;
    while(1)
    { r=0,sum=0;
     while(n>0)
     {
        r=n%10;
        sum=sum+r*r;
        n=n/10;
     }
    if(sum!=1 && sum!=4)
       n=sum;
    else
       {
          break;
       }

    }
    if(sum==1)
      std::cout<<"True";
    else if(sum==4)
      std::cout<<"False";

    return 0;
}