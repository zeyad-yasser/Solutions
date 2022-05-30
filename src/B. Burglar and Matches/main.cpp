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

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
    c_p_c();
    int n,m; cin>>n>>m;
   int a ,b, ans=0;
vector<pair<int,int>>vp(0);
for (int i=0 ;i<m;i++){cin>>a>>b; vp.pb({a,b});}
sort(vp.rbegin(),vp.rend(),sortbysec);

    int i=0;
    while (n>=1&&m!=0){

        while (vp[i].first >=1&&n>=1&&m!=0){
            n--;
            vp[i].first--;
            ans+=vp[i].second;
        }

        if (vp[i].first==0){
                i++;
                m--;
        }
    }
    cout<<ans;



    return 0;
}
