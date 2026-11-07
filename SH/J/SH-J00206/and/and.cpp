#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ans=0;
	cin>>n>>m;
	int a[n+100],i,j,cnt;
	for(i=0;i<n;i++) cin>>a[i];
	for(i=30;i>=0;i--){
		cnt=0;
		for(j=0;j<n;j++){
			if((a[j]&(ans+(1<<i)))==(ans+(1<<i))) cnt++;
		}
		if(cnt>=m) ans+=(1<<i);
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
