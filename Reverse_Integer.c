#include<bits/stdc++.h>
#include<math.h>
int main()
{
    int n,sum=0,r,temp;
    std::cin>>n;
    temp=n;
    n=abs(n);
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(temp>0)
     std::cout<<sum;
    else
     std::cout<<-sum;
    return 0;
}