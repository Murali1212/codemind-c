#include<bits/stdc++.h>
int main()
{
    int t,s,b,C;
    std::cin>>t>>s>>b;
    C=2*t*s*b*512;
    C=C/1024;
    std::cout<<C<<"KB";
    return 0;
}