#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m;
int a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		int maxx=-0x7f7f7f7f;
		for(int i=1;i<=n;i++){
			maxx=max(maxx,a[i]);
		}
		cout<<maxx;
		return 0;
	}
	if(m==2){
		int mxx=-0x7f7f7f7f;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				mxx=max(mxx,(a[i]&a[j]));
			}
		}
		cout<<mxx<<'\n';
		return 0;
	}
	
	return 0;
}
