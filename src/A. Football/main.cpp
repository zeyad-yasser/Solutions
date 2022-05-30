///ACC
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
void MOLLTO()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
map<string,int> z;
int main()
{
    MOLLTO();

string s, ans;
int n; cin>>n;
for(int i=0;i<n;i++){
        string in; cin>>in;
    z[in]++;
    if (z[in]>z[ans])ans=in;
}

cout<<ans;
    return 0;
}
*/

 ///ACC Either


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
void MOLLTO()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    MOLLTO();

int n,cnt=0; cin>>n; string z[n];

for(int i=0;i<n;i++) cin>>z[i];

sort(z,z+n);

for(int i=1;i<n;i++){
if(z[i]!=z[i-1])break;
else cnt++;
}


(cnt+1>n-cnt-1)?cout<<z[0]:cout<<z[n-1];

    return 0;
}
