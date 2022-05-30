#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,m,x,z;
    cin>>n>>m;
vector <int> v1;
vector <int >v2;
  for (int i=0 ;i<n;i++)
  {
    cin>>x;
      v1.push_back(x);
  }
for (int i=0 ;i<m;i++)
  {
     cin>>z;
      v2.push_back(z);
  }
  sort (v1.begin(),v1.end());

  for (vector <int> ::iterator it=v2.begin() ;it!=v2.end();it++)
  {

     int  k= upper_bound(v1.begin() ,v1.end(),*it)-v1.begin();
        cout<<k<<"\n ";

  }





    return 0;
}
