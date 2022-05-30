  #include <iostream>
#include <algorithm>
using namespace std;

int main ()
{

long long  freq [26]={};
    int n; cin>>n;
     long long int z;
char x;
for (int i =0;i<n;i++){

cin>>x;

freq [x-'a']++;

    }
for (int i =0;i<26;i++){

for (long long j=freq[i];j>0;j--)
{
    char temp=i+'a';
    cout <<temp;
}

}
	return 0;
}





















