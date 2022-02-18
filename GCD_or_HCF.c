#include<bits/stdc++.h>
int main()
{
    int m,n,min,i;
    std::cin>>m>>n;
    min=m>n?m:n;
    for(i=min;i>=1;i--)
    {
        if(m%i==0 && n%i==0)
            {
                std::cout<<i;
                break;
            }
    }
    return 0;
}