#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long int cnt=0;
	string g;
	long long int a[200005];char b[200005];
	int o;cin>>o;
	for(int i=1;i<=o;i++){
		cin>>a[i]>>b[i];
	}
	long long int t=1;
	for(int i=1;i<=o;i++){
		for(int j=t;j<=t+a[i];j++){
			g[j]=b[i];
		}
		t+=a[i];
	}

	int cn=1;
	for(int i=1;i<=o;i++){
		if(b[i]==b[i+1])cn++;
	}
	if(cn==o){
		cout<<0;
		return 0;
	}
	double zoo=1;
	long long int zon=0; 
	long long int po;
	for(int i=1;i<=o;i++){
	zoo+=a[i];zon+=a[i];
	}
	po=zoo;
	zoo=zoo/2;
	zon=zon/2;
	//cout<<zoo<<endl;
	string gg;
	string g_;
	for(int i=1;i<zoo;i++)gg[i]=g[i];
	for(int i=po;i>zoo;i--){
		g_[po-i]=g[i];
	}
	for(int i=1;i<zoo;i++){
		if(gg[i]!=g_[i])cnt++;
	}
	//cout<<g[1]<<g[2]<<g[3]<<g[4]<<g[5]<<g[6]<<endl;
	//cout<<gg[1]<<gg[2]<<gg[3]<<endl;
	//cout<<g_[1]<<g_[2]<<g_[3]<<endl;
	cout<<cnt;
	return 0;
	}
	
