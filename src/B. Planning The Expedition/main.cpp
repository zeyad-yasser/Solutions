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

int n,m;

cin>>n>>m;
if (n>m){cout<<"0";return 0;}
map<int,int>m1;
map<int,int>m2;
int arr_1[m];
int arr_2[n];
int arr_3[n];

for(int i=1;i<=m;i++)
{
    int x;cin>>x;
    arr_1[i]=x;
    m1[x]++;

    if (i<=n)
    {
        arr_2[i]=x;
        m2[x]++;
    }

}


int z=-1;

for (int i=1;i<=n;i++)
{
    z=max(m2[arr_2[i]],z);
}


for (int i=1;i<=n;i++)
{
    arr_3[i]=m2[arr_2[i]];
}




if (z==1)
{
    int y=20000;
   for (int i=1;i<=n;i++)
  {
    y=min(m1[arr_1[i]],y);
  }
  cout<<y;return 0;
}


else

{
  int r=200000;
  for (int i=1;i<=n;i++)
  {
    r=min (m1[arr_1[i]]/arr_3[i],r);
  }
cout<<r;
}



    return 0;
}
