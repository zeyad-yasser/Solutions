#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define H ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int N = 1e5 +5 ;
bool prime[N];

void seive(){

}

int main() {
    H
	int n, q;
    cin >> n >> q;
    ll arr[n];
    for (int i = 0; i < n; i++){
    	cin >> arr[i];

    }
    sort(arr, arr + n);
    ll sum[n];
    for (int i = 0; i < n; i++){
    	if (i == 0) sum[i] = arr[i];
    	else sum[i] = sum[i - 1] + arr[i];
    }
    while (q--){
    	int x;
    	cin >> x;
    	int l = 0, r = n - 1, mid, ans = -1;
    	while (l <= r){
    		mid = (l + r) / 2;
    		if (x <= arr[mid]){
    			l = mid + 1;
    			ans = mid;

    		}
    		else r = mid - 1;
    	}
    	cout << mid + 1 << ' ' << sum[mid];
    }
    return 0;
}
