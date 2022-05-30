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
int cnt_a=0,cnt_b=0,cnt_c=0; string s;
for(int i=0;i<3;i++)
{
    cin>>s;
    if(s=="A>B"||s=="A>C"||s=="B<A"||s=="C<A")cnt_a++;

    else if (s=="A<B"||s=="C<B"||s=="B>A"||s=="B>C")cnt_b++;

    else {cnt_c++;}
}



if (cnt_a==cnt_b||cnt_c==cnt_b||cnt_a==cnt_c){cout<<"Impossible"; return 0;}

if (cnt_a>cnt_b&&cnt_a>cnt_c&&cnt_b>cnt_c){cout<<"CBA";}
if (cnt_a>cnt_b&&cnt_a>cnt_c&&cnt_b<cnt_c){cout<<"BCA";}


if (cnt_a<cnt_b&&cnt_c<cnt_b&&cnt_a<cnt_c){cout<<"ACB";}
if (cnt_a<cnt_b&&cnt_c<cnt_b&&cnt_a>cnt_c){cout<<"CAB";}


if (cnt_a<cnt_c&&cnt_b<cnt_c&&cnt_a<cnt_b){cout<<"ABC";}
if (cnt_a<cnt_c&&cnt_b<cnt_c&&cnt_a>cnt_b){cout<<"BAC";}



    return 0;
}
