#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[200005],ans,v[31],cnt=1;
	cin>>n>>m;
	v[0]=1;
	for(int i=1;i<=30;i++) v[i]=v[i-1]*2;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	ans=a[n];
	for(int i=n-1;i>n-m;i--){
		int f=0;
		for(int j=1;j<=30;j++){
			if(a[i]==v[j]){
				ans=(ans&a[m-cnt]);	
				cnt++;
				f=1;
				break;
			}
		}
		if(f==0) ans=(ans&a[i]);
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}