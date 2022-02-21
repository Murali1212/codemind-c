#include<bits/stdc++.h>
int main()
{
    int x[20],y[20],i,j,m,n,flag=0;
    std::cin>>m>>n;
    for(i=0;i<m;i++)
    {
        std::cin>>x[i];
    }
    for(i=0;i<n;i++)
    {
        std::cin>>y[i];
      
    }
    for(i=0;i<m;i++)
    { flag=0;
      for(j=0;j<n;j++)
        if(x[i]==y[j])
           {
               flag=1;
               break;
           }
      if(flag==0)
       std::cout<<x[i]<<" ";
    }
   
    for(i=0;i<n;i++)
    { flag=0;
      for(j=0;j<m;j++)
        if(y[i]==x[j])
           {
               flag=1;
               break;
           }
      if(flag==0)
       std::cout<<y[i]<<" ";
    }
    
    return 0;
}