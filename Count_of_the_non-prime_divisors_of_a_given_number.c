#include<bits/stdc++.h>
#include<math.h>
bool prime(int n)
{
    int i,count=0;
    for(i=2;i<=(int)sqrt(n);i++)
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
    int n,i,c=1;
    std::cin>>n;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
          if(!prime(i))
           c++;
        }
    }
    std::cout<<c;
    return 0;
}