#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string ch;
    int count=0,i;
    getline(cin,ch);
    
    for(i=0;ch[i]!=NULL;i++)
      {
          if(ch[i]==' ')
             count++;
      }
     cout<<count+1;
      return 0;
}