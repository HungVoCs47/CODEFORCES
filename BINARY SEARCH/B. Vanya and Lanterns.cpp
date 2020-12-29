#include <iostream>
#include <algorithm>
#include <iomanip>
 
using namespace std;
const int MAX_N = 100005;
int n, L;
int a[MAX_N];
 
int main () {
//	freopen("DENDUONG.INP", "r", stdin);
//	freopen("DENDUONG.OUT", "w", stdout);
	cin >> n >> L;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
 
	sort(a + 1, a + n + 1);
	double res = max(a[1], (L - a[n]));
	for (int i = 2; i <= n; i++)
		res = max(res, 0.5 * (a[i] - a[i - 1]));
 
	cout << fixed << setprecision(10) << res;
	return 0;
}
