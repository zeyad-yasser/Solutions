#include <bits/stdc++.h>
using namespace std;
#define ff  first
#define ss second
#define mod  1000000007
#define MAX  9999999999
#define el  '\n'
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

long int i,n;
vector <pair <string,string>>v;
string s1,s2;

while (cin>>n)

{
    while (n--)
    {
        cin>>s1>>s2;
        for ( i=0;i<v.size();i++)
        {
            if (v[i].second ==s1)
            {
                v[i].second =s2;
                break;
            }
        }
        if (i==v.size()){v.pb(make_pair(s1,s2));}
    }


cout <<v.size()<<el;

for (i=0;i<v.size();i++){cout <<v[i].first<<" "<<v[i].second<<el ;}

}

    return 0;
}
