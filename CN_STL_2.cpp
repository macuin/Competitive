#include<cstring>
#include<map>
#include<iostream>

using namespace std;

int main()
{
  string s;
  int i,flag=0;
  //Implementation of MAP to find freqency. 
  map<char,int> m;

  cin>>s;
  
  for(i=0;i<s.length();i++)
    m[s[i]]=m[s[i]]+1;

    map<char,int>::iterator it;

    for(it=m.begin();it!=m.end();it++)
    cout<<it->first <<" : " <<it->second <<endl;
    
    for(i=0;i<s.length();i++)
    {   
      for(it=m.begin();it!=m.end();it++)
        if(s[i]==it->first&&it->second==1)
         {  
          cout<<it->first;
          flag=1;
         }
        if(flag==1)
          break;
    }
//If no freqency is 1 then print first element in character array.
    if(flag==0)
      {
        i=0;
        cout<<s[i];
      }


  return 0;
}
