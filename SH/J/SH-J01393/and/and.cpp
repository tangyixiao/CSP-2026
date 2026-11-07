#include<bits/stdc++.h>
using namespace std;
long long n,m,c[12345678],ma=0,cc[12345678],ans=0,sum=0,vis=0,ccc[12345678];
int q(int qqq){
	if(qqq==0)
		return 1;
	else
		return q(qqq-1)*2;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<12345677;i++){
		c[i]=0;
		cc[i]=0;
		ccc[i]=0;
	}
	for(int i=1;i<=n;i++){
		cin>>c[i];
		ma=max(ma,c[i]);
	}
	for(int i=1;i<=ma;i++){
		if(q(i)>ma){
			ma=q(i-1);
			break;
		}
	}
	while(ma!=0){
		for(int i=1;i<=n;i++){
			int qwe=c[i]&ma;
			if((qwe==ma)&&(vis==0||cc[i]==1)){
				sum+=1;
				cc[i]=1;
				ccc[i]=1;
			}
		}
		if(sum>=m){
			ans+=ma;
			sum=0;
			vis=1;
			for(int i=1;i<=n;i++){
				if(ccc[i]!=1)
					cc[i]=0;
				ccc[i]=0;
			}
		}
		else if(vis==0){
			for(int i=1;i<=n;i++){
				cc[i]=0;
				ccc[i]=0;
			}
		}
		ma/=2;
		sum=0;
	}
	cout<<ans;
	return 0;
} 
