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
    int m,n,i,d=1;
    std::cin>>m>>n;
   
    for(i=m+n+1;;i++)
    {
       if(prime(i))
       {
          std::cout<<d<<"
";
          break;
       }
       d++;
    }
   
    return 0;
}