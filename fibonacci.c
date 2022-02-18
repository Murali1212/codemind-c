#include<bits/stdc++.h>
int main()
{
    int a=0,b=1,c=0,n;
    std::cin>>n;
    std::cout<<a<<" "<<b<<" ";
    c=a+b;
    n=n-2;
    while(n>=1)
    {
        std::cout<<c;
        a=b;
        b=c;
        c=a+b;
        
        
        n--;
        std::cout<<" ";
    }
    
    return 0;
}