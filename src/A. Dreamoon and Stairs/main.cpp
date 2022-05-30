/*#include <bits/stdc++.h>

using namespace std;
#define ff  first
#define ss second
#define mod  1000000007
#define MAX  9999999999
#define el '\n'
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
#define p push

#define reed   freopen ("input.txt","r",stdin);
#define write  freopen ("output.txt","w",stdout);


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



int n, m ; cin>>n>>m;


    int z= (n+1)/2 ;
    int ans = (z+m-1)/m*m ;
    if(ans>n)
        ans = -1 ;
    cout<<ans;


    return 0;
}

*/

#include <bits/stdc++.h>

using namespace std;
#define ff  first
#define ss second
#define mod  1000000007
#define MAX  9999999999
#define el '\n'
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
#define p push

#define reed   freopen ("input.txt","r",stdin);
#define write  freopen ("output.txt","w",stdout);


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

   int m , z, n; cin>>n>>m;

   if (m>n){return cout<<-1,0;}

    (n%2==0)? z=n/2 : z=(n/2)+1;

    for (int i=z;i<=n;i++)
    {
        if(i%m==0)return cout<<i,0;
    }

  cout<<-1;
  return 0;






    return 0;
}



















