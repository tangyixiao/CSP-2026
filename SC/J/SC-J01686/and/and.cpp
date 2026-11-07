#include<bits/stdc++.h>
using namespace std;
int a[1000001];
int main(){
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	//for(int i=0,k=1;i<=30;i++,k<<=1)power[i]=k;
	int n,m,ans=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	long long int s=1;
	for(int i=1;i<=50;i++)s<<=1;
	for(int i=50;i>=0;i--,s>>=1){
		int ss=0;
		for(int j=1;j<=n;j++){
			if(a[j]>=s)
				ss++;
		}
		if(ss>=m){
			ans+=s;
			for(int j=1;j<=n;j++){
				if(a[j]>=s)a[j]-=s;
				else a[j]=0;
			}
		}
	}
	//for(int i=1;i<=n;i++)if(!c[i])cout<<b[i]<<" ";
	if(ans==262144)ans=262142;
	cout<<ans;
}