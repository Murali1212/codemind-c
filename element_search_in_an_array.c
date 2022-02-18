#include<bits/stdc++.h>
int main()
{
    int n,x[10],ele,i;
    std::cin>>n;
    
    for(i=0;i<n;i++)
     std::cin>>x[i];
    std::cin>>ele;
    
    for(i=0;i<n;i++)
    {
        if(ele==x[i])
          {
              std::cout<<"True";
              return 0;
          }
    }
    std::cout<<"False";
    return 0;
}