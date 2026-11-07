#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int unsigned int
unsigned long long ans;
int n,num[200005];
char x[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	int l=1;
	int r=n;
	for(int i = 1;i <= n;i++){
		cin >> num[i] >> x[i];
	}
	while(l < r){
		if(x[l]==x[r]){
			if(num[l]<num[r]){
				num[r]-=num[l];
				l++;
			}else if(x[l]==x[r]){
				l++;
				r--;
			}else{
				num[l]-=num[r];
				r--;
			}	
		}else{
			if(num[l]<num[r]){
				ans+=num[l];
				num[r]-=num[l];
				l++;
			}else if(x[l]==x[r]){
				ans+=num[l];
				l++;
				r--;
			}else{
				ans+=num[r];
				num[l]-=num[r];
				r--;
			}	
		}
	}
	cout << ans;
	return 0;
}