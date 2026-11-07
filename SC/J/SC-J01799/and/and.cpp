#include<bits/stdc++.h>
using namespace std;
bool a[200005][33];
bool b[200005];
int p[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		b[i]=0;
		cin>>p[i];
		for(int j=31;j>=0;j--){
			if(p[i]&(1<<j)){
				a[i][j]=1;
			}
		}
	}
	int maxj=0;
	for(int j=0;j<=31;j++){
		int ji=0;
		for(int i=0;i<n;i++){
			ji+=a[i][j];
			if(ji>=m){
				maxj=max(maxj,j);
			}
		}
	}
	int he=n;
	for(int i=maxj;i>=0;i--){
		for(int j=0;j<n;j++){
			if(b[j])continue;
			if(a[j][i]==0){
				b[j]=1;
				he--;
				if(he<=m){
					break;
				}
			}
		}
		if(he<=m){
			break;
		}
	}
	int jie=2147483647;
	for(int j=0;j<n;j++){
		if(b[j])continue;
		jie&=p[j];
	}
	cout<<jie;
	return 0;
}