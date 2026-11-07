#include<bits/stdc++.h>
using namespace std;
int n,l,r;
long long a[200001];
long long ans;
char c,s[200001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);	
	scanf("%d",&n);
	for(int i = 1;i <= n;++i){
		scanf("%lld%c%c",&a[i],&c,&s[i]);
	}
	l = 1,r = n;
	while(l+1 != r){
		if(s[l] == s[r]){
			if(a[l] > a[r]){
				a[l] -= a[r];
				r--;
			}else if(a[l] < a[r]){
				a[r] -= a[l];
				l++;
			}else{
				r--;
				l++;
			}
		}else{
			if(a[l] > a[r]){
				ans += a[r];
				a[l] -= a[r];
				r--;
			}else if(a[l] < a[r]){
				ans += a[l];
				a[r] -= a[l];
				l++;
			}else{
				ans += a[l];
				r--;
				l++;
			}			
		}
	}
	if(s[l] != s[r]){
		ans += min(a[l],a[r]);
	}
	printf("%lld\n",ans);
	return 0;
} 