#include<bits/stdc++.h>
int main()
{
    int n,x[20],count=0,i,ele;
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>x[i];
    }
    std::cin>>ele;
    for(i=0;i<n;i++)
    {
        if(ele==x[i])
          count++;
    }
    std::cout<<count;
    return 0;
}