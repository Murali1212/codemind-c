#include<bits/stdc++.h>
int main()
{
    int n,x[20],y[10]={0},i,j,count=0;
    std::cin>>n;
    for(i=0;i<n;i++)
      std::cin>>x[i];
    
    for(i=0;i<n;i++)
    {
        y[x[i]]++;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<10;j++)
        {
          if(y[j]==j && x[i]==j)
          {
              y[j]=0;
              std::cout<<x[i]<<" ";
              count++;
          }
        }
    }
    if(count==0)
        std::cout<<"-1";
    return 0;
}