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

int t ; cin>>t;

while(t--)
{
   int n; cin>>n;
    vector<pair<int,int>>v; string s; bool flag=1;
    int x, y , x_1=0 , y_1=0;



    for(int i=0;i<n;i++){cin>>x>>y; v.pb(make_pair(x,y));}

    sort(v.begin(),v.end());

    for(int i=0;i<n-1;i++)
        {
            if(v[i].second > v[i+1].second){flag=0; break;}

        }


    if (flag)
    {
        for (int i=0; i<n;i++)
        {
            for (int j=x_1;j<v[i].first;j++){s.pb('R');}

            x_1=v[i].first;

            for (int j=y_1;j<v[i].second;j++){s.pb('U');}

             y_1=v[i].second;
        }

        cout<<"YES\n"; cout<<s<<"\n";

    }

    else {cout<<"NO\n";}


}



    return 0;
}
