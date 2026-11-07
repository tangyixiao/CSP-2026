#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e5+10;
int n,a[N];
char c[N];

int chu(int x){
	if(x%2 == 0) return x/2;
	else{
		return (x-1)/2;
	}
}

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	string s = " ";
	int ans = 0,tot = 0;
	for(int i = 1;i <= n;i++){
		scanf("%lld",&a[i]);
		scanf("%s",&c[i]);
		tot+=a[i];
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= a[i];j++){
			s+=c[i];
		}
	}
	for(int i = 1;i <= chu(tot);i++){
		if(s[i]!=s[tot+1-i]){
			ans++;
		}
	}
	cout << ans;
	return 0;
} 
