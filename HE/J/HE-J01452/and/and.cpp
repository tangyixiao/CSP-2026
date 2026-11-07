#include <bits/stdc++.h>
using namespace std;
int n,m,ans;
long long a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,greater<int>());
	for(int i=1;i<=n;i++){
		int cnt=a[i];
		for(int j=i+1;j<=n;j++){
			if(j-i==m){
				ans=max(ans,cnt);
			}
			cnt=cnt&a[j];
		}
	}
	cout << ans; 
	fclose(stdin);
	fclose(stdout);
	return 0;
}
