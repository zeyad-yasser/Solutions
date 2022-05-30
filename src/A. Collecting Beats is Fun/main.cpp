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

int k; cin>>k;
int z=2*k;
int _1=0,_2=0,_3=0,_4=0,_5=0,_6=0,_7=0,_8=0,_9=0;
string s;
for(int i=0;i<16;i++)
{
    cin>>s[i];
    if(s[i]=='1')_1++;
    if(s[i]=='2')_2++;
    if(s[i]=='3')_3++;
    if(s[i]=='4')_4++;
    if(s[i]=='5')_5++;
    if(s[i]=='6')_6++;
    if(s[i]=='7')_7++;
    if(s[i]=='8')_8++;
    if(s[i]=='9')_9++;

}

if( _1<=z && _2<=z && _3<=z && _4<=z && _5<=z && _6<=z && _7<=z && _8<=z && _9<=z )cout<<"YES";
else cout<<"NO";






    return 0;
}
