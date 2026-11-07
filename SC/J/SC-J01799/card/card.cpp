#include<bits/stdc++.h>
using namespace std;
int a[500005];
int zan[500005];
int jie[300005];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int t=0;
		for(int j=i;j<=n;j++){
			for(int o=1;o<=t;o++){//O(n^m) 24
				if(a[j]==zan[o]){
					t=o-1;
					break;
				}
			}
			t++;
			zan[t]=a[j];
		}
		for(int o=1;o<=t;o++){
			jie[zan[o]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<jie[i]<<" ";
	}
	return 0;
}