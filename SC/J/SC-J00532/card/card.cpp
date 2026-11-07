#include<bits/stdc++.h>
using namespace std;
long a[999999],b[999999],n,m,sum[999999];
void yjx(int cs,int x){
	if(cs==0) return;
	for(int i=1;i<=n;i++){
		b[i]=a[i];
	}
	for(int i=1;i<=cs;i++){
		for(int j=i+1;j<=cs;j++){
			if(b[i]==b[j]){
				for(int k=j-1;k>=0;k--){
					b[k]=;
				}
			}
		}
	}
	for(int i=1;i<=m;i++){
		if(b[i]==x){
			sum[x]++;
		}
	}
	cout<<sum[x]<<" ";
	yjx(cs--,x++);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	yjx(n,1);
	return 0;
}