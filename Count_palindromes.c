#include<bits/stdc++.h>
int palindrome(int n)
{ 
    int sum=0,m=n;
    while(n>0)
    {
        sum=sum*10+n%10;
        n=n/10;
    }
    if(m==sum)
      return 1;
    else
       return 0;
}
int main()
{
  int n,x[30],count=0,i;
  std::cin>>n;
  for(i=0;i<n;i++)
    std::cin>>x[i];
  for(i=0;i<n;i++)
  {
      if(palindrome(x[i]))
        count++;
  }
  std::cout<<count;
  return 0;
}