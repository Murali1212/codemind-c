#include<bits/stdc++.h>
int main()
{
    int n,r,l=0;
    std::cin>>n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        if(l<r)
          l=r;
    }
    std::cout<<l;
    return 0;
}