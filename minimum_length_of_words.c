#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ch;
    int i,count=0,min=99;
    getline(cin,ch);
    
    for(i=0;ch[i]!=NULL;i++)
      {
          if(ch[i]==' ')
          {
              if(count<min)
                min=count;
                count=0;
          }
          else
             count++;
      }
      if(count<min)
        min=count;
      cout<<min;
      return 0;
}