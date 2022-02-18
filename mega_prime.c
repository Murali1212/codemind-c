#include<bits/stdc++.h>
bool prime(int n)
{
    int i,count=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
           {
               count++;
               break;
           }
    }
    if(count==0)
      return true;
    else
      return false;
}
int main()
{
    int n,r,found=0;
    std::cin>>n;
    if(!prime(n))
      {
          std::cout<<"Not Mega Prime";
          return 0;
      }
    else
    {
        while(n>0)
        {
            r=n%10;
            if(r==1 || !prime(r))
            {
                found=1;
                break;
            }
            n=n/10;
        }
    }
    if(found==0)
      std::cout<<"Mega Prime";
    else
      std::cout<<"Not Mega Prime";
    return 0;
}