#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,q;cin>>n>>q;
  int x,z;
 multiset <int,greater<int>> myset;
  vector <int> v2;
   for (int i=0;i<n;i++)
   {
       cin>>x;
       myset.insert(x);
   }


for (int i=0;i<q;i++)
    {
        cin>>z;
       v2.push_back(z);
    }






for (vector <int>::iterator it=v2.begin();it!=v2.end();it++)
    {



       cout <<*myset.lower_bound(*it)  << endl;
}








    return 0;
}
