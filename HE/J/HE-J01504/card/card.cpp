#include<bits/stdc++.h>
using namespace std;
const int N=5e3+5;
int n,m,a[N],b[N],cnt[N];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		b[i]=a[i];
		int p;
		for( p=0;p<i;p++) if(b[p]==a[i]) break;
		if(p!=i) {
			while(b[p]!=a[i]){
				b[p]=0;
				p++;
			}
		}
		for(int j=1;j<=m;j++) {
			for(int k=1;k<=i;k++)
				if(b[k]) cnt[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<cnt[i]<< " ";
	return 0;
}

