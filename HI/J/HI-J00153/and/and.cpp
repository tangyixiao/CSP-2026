#include <bits/stdc++.h>
using namespace std;
int n,m;
char k[50],c[200005][50];
long long a[200005],sum;
vector<int>v;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		v.push_back(i);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=30;j++)c[i][j]=(a[i]&1)+'0',a[i]>>=1;
	}
	for(int i=30;i>=1;i--){
		int ans=0;
		vector<int>q;
		for(auto j:v)if(c[j][i]=='1')ans++,q.push_back(j);
		if(ans>=m)v=q,k[i]='1';
		else k[i]='0';
	}
	long long t=1;
	for(int i=1;i<=30;i++){
		if(k[i]=='1')sum+=t;
		t*=2;
	}
	cout<<sum;
    return 0;
}

