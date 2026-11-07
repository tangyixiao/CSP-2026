#include <bits/stdc++.h>
using namespace std;
int erjin(int x){
	int ma=1;
	while(ma<=x){
		ma*=2;
	}
	ma/=2;
	int fan=0;
	while(ma>0){
		fan*=10;
		if(x>=ma){
			x-=ma;
			fan++;
		}
		ma/=2;
	}
	return fan;
}
int com(int x,int y){
	x=erjin(x);
	y=erjin(y);
	int ans=0,fen=1;
	while(x!=0&&y!=0){
		if(x%10==1&&y%10==1){
			ans=ans+fen;
		}
		fen*=2;
		x/=10;
		y/=10;
	}
	return ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n+1],b[m+1],c[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int maxn=0;
	if(m==1){
		for(int i=1;i<=n;i++){
			if(a[i]>maxn) maxn=a[i];
		}
	}
	if(m==2){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				if(com(a[i],a[j])>maxn){
					maxn=com(a[i],a[j]);
				}
			}
		}
	}
	if(m==3){
		for(int i=1;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				for(int q=j+1;q<=n;q++){
					if(com(com(a[i],a[j]),a[q])>maxn){
						maxn=com(com(a[i],a[j]),a[q]);
					}
				}
			}
		}
	}
	cout<<maxn;
	return 0;
}