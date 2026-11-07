#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n,m,k;
	cin>>n>>m;
	int num[n+5],sum[n+5],aum[n+5],s[n+5]={0},m[n+5]={0};
	
	for(int i=1;i<=n;i++)
		cin>>num[i];
	for(int i=1;i<=n;i++)
		sum[i]=num[i];
	
	for(int i=1;i<=n;i++){
		k=0;
		for(int j=1;j<=n;j++)
			if(m[j]==s[i]) k=1;
		if(k==0) m[i]=s[i];
	}
	
	for(int i=1;i<=n;i++){
		s[n+5]={0};
		for(int j=i+1;j<=n;j++){
			n[i]=sum[j];
			for(int h=1;h<=n+5;h++){
				if(s[h]==s[i]&&h!=i) s[h]=s[h+1]=0;
				else {s[n+4]=s[i];s[i]=0;}
			}
			for(int x=1;x<=n;x++){
				if(s[])
			}
		}
	}
	
	return 0;
}