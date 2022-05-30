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

ll n, d ,sum=0; cin>>n>>d;

sum+=(n-1)*10;
for(int i =0;i<n;i++)
{
   int x; cin>>x;
    sum+=x;
}

if (sum>d){return cout<<-1,0; }

ll jokes=2*(n-1);
//cout<<jokes<<el;
 d-=sum;
 ll z=0;
 for(z;d>=5;z++)
 {
     d-=5;
 }
cout<<z+jokes;





    return 0;
}
