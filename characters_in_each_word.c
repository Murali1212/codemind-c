#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ch;
    int i,count=0;
    getline(cin,ch);
    
    for(i=0;ch[i]!=NULL;i++)
      {
          if(ch[i]==' ')
          {
             cout<<count<<" ";
             count=0;
          }
          else
             count++;
      }
     
      cout<<count;
      return 0;
}