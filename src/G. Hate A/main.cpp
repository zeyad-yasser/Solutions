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
bool flag=0;
string t, temp, goot;  cin>>t;

temp=t; int z=t.size();

for (int i=0; i<z ;i++)
{
    if (t[i]=='a')
    {
        t.erase(t.begin()+i);{i--;  z--;}
    }

}
if (t.size()==0){cout<<temp; return 0;}


for (int i=1;i<t.size();i++)
{
    if (t.substr(0,i)==t.substr(i,t.size()))
    {
        goot=t.substr(i,t.size()); flag=1; break;
    }

}
//cout<<goot<<" ";
//cout<<goot.size();

if (!flag||goot.size()%2!=0){cout<<":("; return 0;}

else
{
    int g =goot.size()-1;
    int f= temp.size()-1;
    for (int i=f;i>0;i--)
    {
        if (temp[i]==goot[g] )
            {
                if (g>=0)
                {temp.erase(temp.begin()+i); i++; f++; g--;}

                else {cout<<temp;return 0;}
            }

    }



}
    return 0;
}





int main()
{
    c_p_c();



    int n, z, idx ,g;
    string s, s_2;

    cin >> s;

    n = s.length();
    int cnt = 0;

    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'a')
            cnt++;
    }

    z = 0; idx = 0;
    for(int i = 0; i < n; i++)
    {
        if(z == cnt) break;

        if(s[i] == 'a')
            z++, idx = i + 1;
        else
            s_2.pb(s[i]);
    }

    z = n - idx;
    z -= s_2.length();

    if(z % 2 == 0)
    {
        z /= 2; g = idx; idx += z;
        while(z > 0)
        {
            s_2.pb(s[g]);
            g++; z--;
        }

        z = s.length() - 1;
        for(int i = s_2.length() - 1; i >= 0; i--)
        {
            if(s_2[i] != s[z]){
                cout<<":("; return 0;
            }

            z--;
        }

        for(int i = 0; i < idx; i++)
            cout << s[i];
    }

    else
       cout<<":(";

    return 0;
}
