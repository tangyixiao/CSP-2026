#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m,s,h,maxn=0,p,x=0,ans=0;
	cin>>n>>m;
	int num[n+5],sum[n+5]={0},aum[n*(n-1)/2+5];
	
	for(int i=1;i<=n;i++)
		cin>>num[i];
	
	for(int i=1;i<=n;i++){
		h=1;
		s=num[i];
		while(s>0){
			sum[i]+=s%2*h;
			s/=2;
			h*=10;
		} 
	}
	
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;i++){
			h=1;
			x++;
			p=min(sum[i].size(),sum[j].size());
			for(int z=1;z<=p;z++)
				h*=10;
			for(int y=1;y<=p;y++){
				if(sum[i]%h/(h/10)==sum[j]%h/(h/10) aum[x]+= sum[i]%h(h/10)*h;
				h/=10
			}
		}
		if(sum[x]>maxn) maxn=sum[x];
	}

	p=maxn.size();
	h=1;
	for(int i=1;i<=p,i++){
		ans+=maxn%10*h;
		maxn/=10;
		h*=2;
	}
	
	cout<<ans;
	
	return 0;
}