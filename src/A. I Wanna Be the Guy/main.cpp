#include <bits/stdc++.h>
using namespace std;
#define ff  first
#define ss second
#define mod  1000000007
#define MAX  9999999999
#define endl '\n'
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
#define p push


#define mk(arr,n,type)  type *arr=new type[n];
void c_p_c()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    c_p_c();
   int n;cin>>n;
   int p,q,a,b,z=-1,y=-1,ans;
   set<int>st;

   if (n==1)
{
    cin>>a>>b;
    if (a==1||b==1){cout<<"I become the guy.";return 0;}
   else {cout<<"Oh, my keyboard!";return 0;}
}
cin>>p;
for(int i=0;i<p;i++)
{
    cin>>a;
    st.insert(a);
}

cin>>q;
for (int i=p;i<q+p;i++)
{
    cin>>b;

   st.insert(b);
}

bool flag=1;






if(st.size()==n){ cout<<"I become the guy.";}

else {cout<<"Oh, my keyboard!";}
    return 0;
}
