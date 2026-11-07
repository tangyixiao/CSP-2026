#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,a[1000],ma,m,s[1000],z=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=m;i++){
		int f=0,h=1,k=1;
		while(a[i]>=1){
			if(f=0){
				h*=2;
				k++;
			}
			if(f==1){
				h/=2;
				k--;
			}
			if(a[i]<h){
				a[i]-=h/2;
				s[k-1]++;
				f=1;
				z=max(z,k);
			}
		}
	}
	for(int i=1;i<=z;i++){
		int e=0;
		if(s[i]!=m)continue;
		else {
			e=1;
			for(int j=1;j<=i;j++){
			e*=2;
		}
		ma+=e;
	}
}
	
	cout<<ma;
}
