#include<bits/stdc++.h>
int main()
{
  int n,x[30],count=0,i;
  std::cin>>n;
  for(i=0;i<n;i++)
    std::cin>>x[i];
  
  for(i=0;i<n-1;i++)
  {
      if(x[i]>=x[i+1])
        {
            std::cout<<"no";
            return 0;
        }
  }
  std::cout<<"yes";
  return 0;
}