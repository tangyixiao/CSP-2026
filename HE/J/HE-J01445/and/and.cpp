#include <bits/stdc++.h>
using namespace std;
const int N=1e9+10;
int a[N],dp[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	int n;
	cin>>n;
	int m;
	cin>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	}
	if(m==1){
		int l=a[1];
		for(int i=1;i<=n;i++){
			if(l<a[i]){
				l=a[i];
			}
		}
		cout<<l;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=n;j>=1;j++){
				dp[i]=a[i]&a[j];
			}
		}
		int L=dp[1];
		for(int i=1;i<=n;i++){
			if(L<dp[i]){
				L=dp[i];
			}
		}
		cout<<L;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
