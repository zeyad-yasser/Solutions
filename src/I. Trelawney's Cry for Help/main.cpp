#include <iostream>

using namespace std;

int main() {

    int n, x, mx=-1, mn;

    int count = 0;
    int count1 = 0;
    cin >> n;
     int puple [2000];
    for (int i = 0; i < n; i++) {
        cin >> puple[i];
    }
    //*****************************student's position or num
    cin >> x;
   int nump[2000];
   int r=0;
    for  ( int j = 0; j < n; j++) {
        if (puple[j] == x)
            {
            nump[r] = j+1;
            count++;
             r++;
            }

    }

    if (count == 1) {
        cout << "Student ";
        for (int i = 0; i < count; i++) {
            cout << nump[i] ;
        }
         cout << " is " << x << " years old."<<endl;
        }

    if (count == 0) {
        cout << "No students are " << x << " years old."<<endl;
    }


     else if (count > 1) {
        cout << "Students ";
        for (int i = 0; i < count; i++) {
            cout << nump[i] ;
            if (i!=count-1)
            {
                cout<<", ";
            }
        }
        cout << " are " << x << " years old."<<endl;

    }
//***************************************************************RANG
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (puple[i] > puple[j]) {

            }
            if ( mn > puple[i] ) {
               mn=puple[i];
            }
            if (  mx <puple[i] ) {
               mx=puple[i];
            }

        }
    }
    cout << "Range: " << mn << " to " << mx;


    return 0;
}
