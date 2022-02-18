#include<bits/stdc++.h>
#include<math.h>
int main()
{
    int n,s;
    std::cin>>n;
    s=floor(sqrt(n));
    if(s*(s+1)==n)
    std::cout<<"YES";
    else
      std::cout<<"NO";
    
    return 0;
}