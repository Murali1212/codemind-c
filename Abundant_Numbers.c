#include<bits/stdc++.h>
int main()
{
    int n,sum=0,i;
    std::cin>>n;
    
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
           sum=sum+i;
    }
    if(sum>n)
       std::cout<<"True";
    else
       std::cout<<"False";
    return 0;
    
}