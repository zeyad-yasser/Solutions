#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector <int> v;
    vector <int> v2;
    int n,x;cin>>n;
    for (int i=0;i<n;i++)
    {
         cin>>x;
       v.push_back(x);
    }
    sort (v.begin(),v.end());
int q ;cin>>q;
int z;
int s;
for (int i=0;i<q;i++)
    {
         cin>>z;
       v2.push_back(z);
    }



for (vector <int>::iterator it =v2.begin();it!=v2.end();it++)
   {


    s =upper_bound(v.begin(),v.end(),*it)-v.begin();
    cout<<s<<endl;



   }





    return 0;
}
