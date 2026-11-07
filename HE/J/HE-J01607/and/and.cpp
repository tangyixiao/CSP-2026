#include<bits/stdc++.h>
using namespace std;
long long n,m,a[100005],maxn=-1e9,sum;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(maxn,a[i]);
	}
	if(m==1){
		cout<<maxn;
		return 0;
	}
	sort(a+1,a+n+1);
	maxn=a[n];
	for(int i=n;i>n-m;i--){
		maxn=maxn&a[i];
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				maxn=max(maxn,a[i]&a[j]);
			}
		}
		return 0;
	}
	cout<<maxn;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
