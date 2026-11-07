#include <iostream>
#include <cmath>
const int MAXN = 2e5 + 100;

using namespace std;

int arr[MAXN] = {};
bool selectable[MAXN] = {};  // available = 0, unavailable = 1


// get the d-th (from low to high) value of the i-th number
bool get(int i, int d) {
    return bool((arr[i] >> d) % 2);
}


int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
    int n, m;
    cin >> n >> m;

    int maxdeg = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &(arr[i]));
        maxdeg = max(maxdeg, int(log2(arr[i])));
    }
    
    // cout << maxdeg;

    int ans = 0;
    for (int deg = maxdeg; deg >= 0; deg--) {
        int cnt_true = 0;
        for (int i = 0; i < n; i++) {
            if (get(i, deg) == 1 && selectable[i] == 0) {
                cnt_true++;
            }
        }
        // cout << cnt_true << '\n'; 
        if (cnt_true >= m) {
            // fix the selectable numbers
            for (int i = 0; i < n; i++) {
                if (selectable[i] == 0 && get(i, deg) == 0) {
                    selectable[i] = 1;  // mark it as unselectable
                }
            }
            // accumulate
            ans += 1 << deg;
        }
    }

    cout << ans;
    return 0;
}
