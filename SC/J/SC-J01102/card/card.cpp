#include<bits/stdc++.h>
using namespace std;
#define int long long
int t[300005],n1[500005],st[500005];
signed main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>n1[i];
	}
	for(int k=1;k<=n;k++){
		int cnt=0,cnt1;
		for(int i=k;i<=n;i++){
			int b=1; 
			for(int j=1;j<=cnt;j++){
				if(st[j]==n1[i]){
					cnt=j;
					b=0;
					break;
				}
			}
			if(b){
				cnt++;
				st[cnt]=n1[i];
			}
//			for(int j=1;j<=cnt;j++){
//				cout<<st[j]<<' ';
//			}
//			cout<<endl;
			cnt1=cnt;
		}
		for(int i=1;i<=cnt1;i++){
			t[st[i]]++;
		}
		
	}
	for(int i=1;i<=m;i++){
		cout<<t[i]<<" ";
	}
	return 0;
}