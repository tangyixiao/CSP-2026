#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],maxn=0;
bool p[200005][35],q[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int x=1,y=a[i];
		while(y>0){
			p[i][x]=y%2;
			y/=2;
		}
		maxn=max(maxn,x);
	}
	for(int i=maxn;i>0;i--){
		int x=0;
		for(int j=1;j<=n;j++){
			if(p[j][i]==1){
				q[j]=1;
				x++;
			}
		}
		if(x==m){
			int b=2147483647;
			for(int j=1;j<=n;j++){
				if(q[j]){
					b=b&a[j];
				}
			}
			cout<<b<<endl;
		}
		else if(x<m){
			for(int j=1;j<=n;j++){
				q[j]=0;
			}
		}
	}
	return 0;
}