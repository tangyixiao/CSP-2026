#include <bits/stdc++.h>
using namespace std;
int n,a[200005],mini;
char c[200005];
long long sum,ans,i,j,cnt;
bool party;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) {
		scanf("%d%s",&a[i],&c[i]);
		sum+=a[i];
	}
	i=1;j=n;
	while(1) {
		if(i==j) break;
		if(cnt>=sum/2) break;
		if(a[i]>a[j]) party=1;
		else party=0;
		if(party==1) mini=a[j];
		else mini=a[i];
		cnt+=mini;
		
		if(c[i]!=c[j]) {
			ans+=mini;
		}
		
		if(party==1) {
			a[i]-=mini;
			j--;
		}
		else {
			a[j]-=mini;
			i++;
		}
	}
	cout<<ans;
	return 0;
}
