#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1,greater<int>());
	if(m==1){
		cout<<a[1];
		return 0; 
	}if(m==n){
		int cnt=(a[1]&a[2]);
		for(int i=3;i<=n;i++){
			cnt=(cnt&a[i]);
		}cout<<cnt;
		return 0;
	}if(m==n-1){
		int cnt=(a[1]&a[2]);
		for(int i=3;i<n;i++){
			cnt=(cnt&a[i]);
		}cout<<cnt;
		return 0;
	}if(m==2){
		int ans;
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				ans=max(ans,(a[i]&a[j]));
			}
		}cout<<ans;
		return 0;
	}
	cout<<a[3];
	fclose(stdin);
	fclose(stdout);
	return 0;
}
