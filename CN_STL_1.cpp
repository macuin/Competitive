#include<iostream>
#include<vector>
#include<set>
using namespace std;

//Fucntion to remove duplicates and return new array.
vector<int> removeDuplicates(vector<int> input, int n)
{
 	
    int i,j,a;
    vector<int> o;
  
    set<int> s;

    for(i=0;i<n;i++)
      s.insert(input[i]);

    set<int> ::iterator it; 

    for(it=s.begin(),j=0;it!=s.end();it++)
    {
          a=*it;
          o.push_back(a);
          j++;
    }
   
  return o;

}


int main()
{
  	vector<int> ::iterator it;
  	int n,i,a;
    
    	vector<int> v;
  	vector<int> o;
  
//Enter length of array.
  	cin>>n;
  
  	for(i=0;i<n;i++)
    	{
		cin>>a;
		v.push_back(a);
    	}
	
  	o=removeDuplicates(v,n);
  
  	for(it=o.begin();it!=o.end();it++)
      		cout<<*it<<" ";
  
  return 0;
}

