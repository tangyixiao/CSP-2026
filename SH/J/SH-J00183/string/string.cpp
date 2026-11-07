#include<bits/stdc++.h>
using namespace std;
int n;
long long sz[200010];
char a[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i ++)
		cin >> sz[i] >> a[i];
	int l = 1,r = n;
	long long ans = 0;
	long long cntl = sz[1],cntr = sz[n];
	while(l < r){
		if(a[l] == a[r]){
			if(cntl >= cntr)
				cntl -= cntr,r--,cntr = sz[r];
			else cntr -= cntl,l ++,cntl = sz[l];
		}
		else if(cntl >= cntr)
			cntl -= cntr,ans += cntr,r --,cntr = sz[r];
		else cntr -= cntl,ans += cntl,l ++,cntl = sz[l];
		
	} 
	cout << ans;
	return 0;
} 
