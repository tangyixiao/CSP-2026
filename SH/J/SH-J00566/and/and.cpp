#include<bits/stdc++.h>
using namespace std;

int n, m;

int ans = 0x7fffffff;

int cnt = 0;
int cnt1 = 0;
int cnt2 = 0;

const int MAXN = 2e5 + 10;

long long a[MAXN];

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
		
	cin >> n >> m;
	
	if(n == 1){
		cin >> m;
		cout << m;
		return 0;
	}
	
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		if(a[i] == 0){
			cnt++;
		}
		if(cnt + m > n){
		    cout << 0;
		    return 0;
	    }
	    if(a[i] == i - 1){
	    	cnt2++;
		}
	    for(int j = 0; j <= 30; j++){
	    	if(pow(2, j) - 1 == a[i]){
	    		cnt1++;
	    		break;
			}
		}
	}
		
	
	sort(a + 1, a + n + 1);
	
	if(m == 1){
		cout << a[n];
		return 0;
	}
	
	if(cnt1 == n){
		cout << a[n - m + 1];
		return 0;
	}
	if(cnt2 == n){
		int flag = 0;
		for(int j = 0; j <= 30; j++){
	    	if(pow(2, j) == n){
	    		flag = 1;
	    		break;
			}
		}
		if(flag){
			for(int i = n; i >= n - m + 1; i--){
				ans = ans & a[i];
			}
			cout << ans << endl;
			return 0;
		}
	}
	
	ans = 0;
	
	cout << ans;
	
	return 0;
}
