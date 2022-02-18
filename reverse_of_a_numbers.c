#include<bits/stdc++.h>
int main()
{
    int n,r,sum=0;
    std::cin>>n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    std::cout<<sum;
    return 0;
}