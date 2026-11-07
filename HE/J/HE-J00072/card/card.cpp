#include<iostream>
using namespace std;
int n,m,a[500010],ans[300010];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0; i<n; i++) cin>>a[i];
	for(int x=0; x<n; x++) {
		int l[500010]= {0},cnt1=0;
		for(int i=x; i<n; i++) {
			if(cnt1!=0) {
				for(int cnt2=0; cnt2<cnt1; cnt2++) {
					if(l[cnt2]==a[i]) {
						l[cnt2]=0;
						cnt1=cnt2;
						break;
					}
				}
			}
			l[cnt1]=a[i];
			cnt1++;
			l[cnt1]=0;
		}
		for(int i=0; l[i]!=0; i++) ans[l[i]]++;
	}
	for(int i=1; i<=m; i++) cout<<ans[i]<<' ';
	return 0;
}
