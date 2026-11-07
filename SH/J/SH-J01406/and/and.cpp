#include <bits/stdc++.h>
using namespace std;
long long n,m,a[200005],ans,del[200005];
int dfs(int a,int b,int n){
	int val = a&b;
	if(n != 0){
		dfs(a,val,n - 1);	
	}else{
		return val;
	}
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	} 
	int max=0;
	if(m == n){
		ans = a[1];
		for(int i=2;i<=n;i++){
			ans &= a[i];
		}
		cout << ans;
		return 0;
	}
	if(m == 1){
		for(int i=1;i<=n;i++){
			if(a[i] > max){
				max = a[i];
			}
		}
		ans = max;
		cout << ans;
		return 0;
	}
	if(m == 2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<i;j++){
				if(a[i] & a[j] > max){
					max = a[i] & a[j];
				}
			}
		}
		ans = max;
		cout << ans;
		return 0;
	}
	for(int i=1;i<=n;i++){
		if(dfs(a[i],a[i+1],n) > max){
			max = dfs(a[i],a[i+1],n);
		}
		ans = max;
	}
	//---------------------------------------------------------------
	
	cout << ans;
	return 0;
}

