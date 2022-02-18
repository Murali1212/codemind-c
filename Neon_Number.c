#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,sum=0,r;
    std::cin>>n;
    p=n*n;
    
    while(p>0)
    {
        r=p%10;
        sum=sum+r;
        p=p/10;
    }
    if(sum==n)
      std::cout<<"Neon Number"<<endl;
    else
      std::cout<<"Not Neon Number"<<endl;
      
    return 0;
    
}