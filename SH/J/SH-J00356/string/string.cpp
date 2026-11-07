#include <bits/stdc++.h>
using namespace std;
int n,a[200010];
char c[200010];
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=1,j=n;i<=n;){
		if(i==j) break;
		if(c[i]!=c[j]){
			ans+=min(a[i],a[j]);
		}
		int x=a[i]-a[j],y=a[j]-a[i];
		a[i]=max(0,x);
		a[j]=max(0,y);
		if(a[i]==0) i++;
		if(a[j]==0) j--;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
