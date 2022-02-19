#include<bits/stdc++.h>
int main()
{
    int n,x[30],y[10]={0},i,j,count=0;
    std::cin>>n;
    for(i=0;i<n;i++)
      std::cin>>x[i];
    
    for(i=0;i<n;i++)
    {
        y[x[i]]++;
    }
    for(i=1;i<10;i++)
    {
        if(y[i]==i)
          count++;
    }
    
        std::cout<<count;
    
    return 0;
}