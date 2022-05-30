#include <iostream>

using namespace std;

int main()
{
    int x;

    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>x;
        if (x== 2||x== 3|| x==4||x== 6||x== 10||x== 12||x== 16||x== 22||x== 28||x== 42||x== 46){

            cout<<"prime\n";
        }
        else
        {

            cout<<"not prime\n";
        }

    }

    return 0;
}
