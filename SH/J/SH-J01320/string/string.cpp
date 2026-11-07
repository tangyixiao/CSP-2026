#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
struct st{
	int ai;
	char ci;
}a[200020];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].ai>>a[i].ci;
		a[i].ai+=a[i-1].ai;
	}
	int l=1,r=n-1,ans=0;
	for(int i=1;i<=a[n].ai/2;) {
		while(a[l].ai<i) l++;
		while(a[r].ai>=a[n].ai-i+1) r--;
		if(l>r) break;
		if(a[l].ci==a[r+1].ci) {
			if(a[l].ai+a[r].ai>=a[n].ai) {
				i=a[n].ai-a[r].ai+1;
			}
			else {
				i=a[l].ai+1;
			}
		}
		else {
			if(a[l].ai+a[r].ai>=a[n].ai) {
				ans+=(a[n].ai-a[r].ai+1-i);
				i=a[n].ai-a[r].ai+1;
			}
			else {
				ans+=(a[l].ai+1-i);
				i=a[l].ai+1;
			}
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
