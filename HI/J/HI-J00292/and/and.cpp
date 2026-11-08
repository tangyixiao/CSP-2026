#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005],ma,moy;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int x=a[i];
		for(int j=1;j<=n;j++){
			int y=a[j];
			
			
			moy=x&y;
			
			ma=max(ma,moy);
		}
	}
	cout<<ma;
	return 0;
} 


