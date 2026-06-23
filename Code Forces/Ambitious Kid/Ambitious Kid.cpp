#include <bits/stdc++.h>

using namespace std;

int main()
{

	long long  n; cin >> n;
	set<long long> st;
	for (int i = 0; i < n; i++) {
		long long num; cin >> num;
		st.insert(abs(num));
	}
	cout << *st.begin() << endl;

}
