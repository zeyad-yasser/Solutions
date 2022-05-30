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
int home[100]={0};
int uniform[100]={0};
int z=0;
for (int i=0;i<n;i++)
{
    int x; cin>>x;
    home[z]=x;
    int y; cin>>y;
    uniform[z]=y;
    z++;
}

int ans=0;
for (int i=0;i<z;i++)
{
    for( int j=0;j<z;j++)
    {
          if (uniform[i]==home [j]){ans++;}
    }

}

cout <<ans;



    return 0;
}
