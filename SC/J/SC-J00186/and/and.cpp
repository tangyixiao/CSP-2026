#include<bits/stdc++.h>
using namespace std;

long long n,m,a[2000005],s[200005][35],x,y,ma,sum,c[35][5],ans,co,ccc[40];

int main(){
	freopen("and.in","w",stdin);
    freopen("and.out","r",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		x=y=0;
		while(a!=0){
			x=a[i]&(-a[i]);
			while(x!=0){
				x>>1;
				y++;	
			}
			s[a[i]][y]=1;
			ma=max(ma,y);
		}
	}
	for(int i=1;i<=ma;i++){
		for(int k=1;k<=n;k++){
			if(s[k][ccc[1]]){
				sum+=s[k][i];
			}
		}
		c[i][1]=sum;
		if(sum>=m){
			c[i][2]=1;
			co++;
			ccc[co]=i;
		}
	}
		for(int k=1;k<=co;k++){
			if(co<m)
			ans+=1<<ccc[co];	
		}
	cout<<ans;
	return 0;
}