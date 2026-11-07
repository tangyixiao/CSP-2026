#include<bits/stdc++.h>
using namespace std;
long long n,ans=0,a[1000001];
char c[1000001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i]; 
	}
	int p=1;
	for(int i=n;i>=2;i--){
		if(a[p]==-1||a[i]==-1)break;
		if(c[p]!=c[i]){
			ans+=min(a[p],a[i]);
			if(a[p]>a[i])a[p]-=a[i];
			else if(a[p]==a[i]){
				a[p]=-1;
				p++;
			}
			else if(a[p]<a[i]){
				c[p]=c[i];
				a[p]=a[i]-a[p];
			}
			a[i]=-1;
		}
		if(c[p]==c[i]){
			if(a[p]>a[i])a[p]-=a[i];
			else if(a[p]==a[i]){
				a[p]=-1;
				p++;
			}
			else if(a[p]<a[i])a[p]=a[i]-a[p];
		}
	}
	cout<<ans;
	return 0;
}