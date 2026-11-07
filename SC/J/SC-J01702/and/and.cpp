#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+10;

int n,m;
int a[N];
int b[N];
int ma = 0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 0;i < n;i ++) cin >> a[i];
	sort(a,a+n,greater<int>());
	
	
	for (int i = 0;i+m-1 < n;i ++){
		int x = a[i];
		for (int j = i;j <= i+m-1;j ++){
			x &= a[j];
		}
		if (x > ma) ma = x;
	}
	
	cout << ma;

	return 0;
}
