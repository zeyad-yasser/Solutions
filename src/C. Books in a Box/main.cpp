#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
     stack<int>st;
    for (int i=0;i<n;i++)
    {
        int z ,x;  cin>>z;
        if (z==1)
        {
            cin>>x;
            st.push(x);

        }
        if (z==2&&st.size()>0)
        {
            st.pop();
        }
        if (z==3&&st.size()>0)
        {
            cout<<st.top()<<"\n";;
        }


    }





    return 0;
}
