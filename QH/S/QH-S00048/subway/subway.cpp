#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("subway.in", "r", stdin);
	freopen("subway.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int c,n,m,d,p;
	cin>>c>>n>>m>>d>>p;
	int w[m];
	for(int i=0;i<m;i++){
		cin>>w[i];
	} 
	int k;
	int a[n][1010];
	int t[n][1010];
	for(int i=0;i<n;i++){
		cin>>k;
		for(int j=0;j<k;j++){
			cin>>a[i][j]>>t[i][j];
		}
	}
	for(int i=0;i<p;i++){
		int x,y;
		cin>>x>>y;
		int cnt=w[x]+w[y];
		for(int j=0;j<k;j++){
			for(int l=0;l<n;l++){
				if(a[l][j]==a[l-1][j]){
					cnt+=t[l][j]+t[l-1][j];
				}
			}
		}
		cout<<cnt;
		cout<<endl;
	}
	
	return 0;
}
