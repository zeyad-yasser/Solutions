#include <bits/stdc++.h>
using namespace std;

//Count number of ones in binary representation of an integer

int countOnes (int n)
{
    int count=0;
    while (n!=0)
    {
        n = n & (n-1);
        count++;
    }
    //cout<<count;
}
int main()
{
    int i; cin>>i;

    cout <<countOnes(i);
    return 0;
}
