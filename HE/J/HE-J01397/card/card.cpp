#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[500005],p[300005],la,num[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","W",stdout);
	ios::sync_with_stdio(false)+cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	la=n;
	int lla=n;
	for(int j=n;j>=1;j--){
		for(int i=j-1;i<=la;i++){
			if(a[i]==a[j]){
				lla=la;
				la=j;
			}
		}
		p[j-1]++;
		p[la]--;
		p[lla]++;
	}
	for(int i=1;i<=n;i++){
		ans[i]=ans[i-1]+p[i-1];
		num[a[i]]+=ans[i];
	}
	for(int i=1;i<=m;i++)cout<<num[i]<<" ";
	return 0;
}
