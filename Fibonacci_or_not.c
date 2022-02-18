#include<bits/stdc++.h>
int main()
{
    int a=0,b=1,c,n;
    std::cin>>n;
    c=a+b;
    while(c<=n)
    {
        if(c==n)
        {
          std::cout<<"True";
          return 0;
        }
        a=b;
        b=c;
        c=a+b;
    }
    std::cout<<"False";
    return 0;
}