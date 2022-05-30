#include <bits/stdc++.h>

using namespace std;
#define z ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    z
    int n;cin>>n;
   string s;cin>>s;
   if (n>26)
       {
         cout<<-1;
         return 0;
       }

   int dist_chars=0;
   int count[26]={0};

    for (int i=0;i<n;i++)
    {
        if(count[s[i]-'a']==0)
            dist_chars++;
        count[(s[i]-'a')]++;
    }

cout <<n-dist_chars<<'\n';
    return 0;
}
