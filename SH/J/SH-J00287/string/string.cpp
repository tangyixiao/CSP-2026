#include <bits/stdc++.h>
using namespace std;
int l = 1,r,n;
int a[200005];
char c[200005];
unsigned long long ans = 0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.ans","r",stdout);
	cin>>n;
	r = n;
	for(int i = 1;i <= n;i++){
		cin>>a[i]>>c[i];
	}
	while(l < r){
		if(a[l] >= a[r]){
			if(c[l] != c[r])ans += a[r];
			a[l] -= a[r];
			a[r] = 0;
			r--;
		}
		else{
			if(c[l] != c[r])ans += a[l];
			a[r] -= a[l];
			a[l] = 0;
			l++;
		}
	}
	cout<<ans;
	return 0;
}
