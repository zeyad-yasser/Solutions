#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;cin>>n;
    queue<int>num;
      int z,x;
    for(int i=0;i<n;i++)
    {
      cin>>z;cin>>x;

        if (z==1)
        {
            num. push(x);
        }


     if (z==2&&num.size()>0)
     {
        if (x==num.front())
        {
        cout<<"Yes\n";
        num.pop();
        }
        else {cout<<"No\n"; num.pop();}

     }
    }
    return 0;
}
