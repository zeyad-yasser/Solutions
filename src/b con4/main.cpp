#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;


#define int             long long

#define mk(arr,n,type)  type *arr=new type[n];

mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int32_t main()
{
	c_p_c();
	int n; cin >> n;
	mk(a, n, int);
	mk(b, n, int);

	for (int i = 0; i < n; ++i)
		cin >> a[i];

	for (int i = 0; i < n; ++i)
		cin >> b[i];

	mk(c, n, int);

	for (int i = 0; i < n; ++i)
		c[i] = b[i] - a[i];

	sort(c, c + n);

	int ans = 0;

	for (int i = 0; i < n; ++i)
	{
		//num of j's s.t cj<-ci;

		//find smallest j s.t. cj >= -ci;

		auto it = lower_bound(c + i + 1, c + n, -c[i]);
		int id = it - c;

		ans += id - (i + 1);
	}

	cout << ans << '\n';
	return 0;
}
