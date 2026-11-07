#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,hl=0,ans=0;
int a[200010];
char c[200010];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		hl+=a[i];
	}
	int i=1,j=n;
	while(i<j){
		if(c[i]!=c[j])
			ans+=min(a[i],a[j]);
		if(a[i]>a[j]){
			a[i]-=a[j];
			j--;
		}else if(a[i]<a[j]){
			a[j]-=a[i];
			i++;
		}else{
			j--,i++;
		}
	}
	cout<<ans;
	return 0;
}
