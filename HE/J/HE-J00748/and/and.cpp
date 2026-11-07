#include<bits/stdc++.h>
using namespace std;
int n,inm;
int a[200010];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>inm;
	for(int i = 1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1);
	int ans = -1e9;
	if(inm==1)ans = a[n];
	else if(inm == n){
		ans = a[1];
		for(int i = 2;i<=n;i++)ans = ans&a[i];
	}else if(inm == 2){
		for(int i = 1;i<=n-1;i++){
			for(int j = i+1;j<=n;j++){
				ans = max(ans,a[i]&a[j]);
			}
		}
	}
	else ans = a[n-inm+1];
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0 ;
}
