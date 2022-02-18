#include<bits/stdc++.h>
int main()
{
    int n,x=0;
    std::cin>>n;
    while(n!=1)
    {
        if(n%5==0)
          n=n/5;
        else if(n%3==0)
          n=n/3;
        else if(n%2==0)
          n=n/2;
        else
        {
            std::cout<<"Not Ugly Number";
            x=1;
            break;
        }
    }
    if(x==0)
      std::cout<<"Ugly Number";
    return 0;
}