#include<iostream>
#include<set>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> v;
    vector<int> ab;

    int i,n,a,k,count=1;

    cin>>n;
    cin>>k;

    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());

    for(i=n-1;count<k;i--)
        count++;

    cout<<v[i];

    return 0;

}