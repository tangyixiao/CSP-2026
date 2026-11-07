#include <bits/stdc++.h>;
using namespace std;
int n,a[200000];
char c[200000];
int main(){
	freopen("string.in";"r";stdin);
	freopen("string.out";"w";stdout);
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> a[i];
		cin >> c[i];
	}
	int l=0,r=n,ans=0;
	while (l<r){
		int minn = min(a[l],a[r]);
		int zzz = max(a[l],a[r]) - minn;
		if (c[l]!=c[r]){
			ans+=minn;
		}
		if (a[l]>a[r]){
			a[l] = zzz;
			r--;
		}
		else if (a[l]<a[r]){
			a[r] = zzz;
			l++;
		}
		else{
			l++;
			r--;
		}
	}
	cout << ans;
	return 0;
}
