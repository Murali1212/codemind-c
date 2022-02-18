#include <bits/stdc++.h>
#include <math.h>
int main()
{
long n, t, r = 0, c, d;
std::cin>>n;
while (1)
{
	n++;
	t = n;
	while(t)
	{
	      r = r*10;
	      r = r + t%10;
	      t = t/10;
    	}
	
	if (r == n)
	{
	      d = (int)sqrt(n);
	      for (c = 2; c <= d; c++)
	      {
	        if (n%c == 0)
	        break;
      	      }
      	     if (c == d+1)
	     break;
    	}
    	r = 0;
}

std::cout<<n<<"
";
return 0;
}

