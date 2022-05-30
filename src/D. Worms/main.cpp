#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,q;cin>>n;
    vector <int> vp(n);
    for(size_t i=0;i<n;i++)
    {
        int x;cin>>x;
       if (i==0)
       vp[i]=x;
       else
        vp[i]=x+vp[i-1];
    }
       cin>>q;

    for(size_t i=0;i<q;i++)
    {
        int z;
     cin>>z;
     auto  it=lower_bound(vp.begin(),vp.end(),z)-vp.begin();

            cout<<it +1<<endl;
    }






    return 0;
}
