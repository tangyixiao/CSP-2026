#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[10000005];
	for(int i = 0;i<=n;i++){
		cin>>a[i];
	}
	int t=m;
	int sum[10000005];
	for(long long i = 0;i<=m;i++){
		sum[i] = 0;
	}
	int cnt = 1;
	for(int i = 1;i<=n;i++){
		int maxn = -9999999;
		if(t!=0){
			for(int j = 0;j<=n;j++){
				if(sum[cnt-1]==a[j]){
						a[j] == 0;
				}
				if(a[j]>maxn){
					maxn == a[j];
					sum[cnt] = a[j];
				}
			}
		}
		t--;
		cnt++;
	}	
	int s = 1;
	for(int i = 1;i<=m;i++){
		sum[i] = sum[i-1] | sum[i];
		s = sum[i];
	}
	cout<<sum;
	return 0;
}
