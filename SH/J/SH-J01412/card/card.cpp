#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int n,m,p[200005],ans[300005];
vector<int> f[200005];
void play(int l){
	if(l>n)    return;
	if(f[l].size()!=0){
		for(int i=0;i<f[l].size();i++)    ans[f[l][i]]++;
		return;
	}
	int k=l;
	ans[a[l]]++;
	for(int i=l+1;i<=n;i++){
		if(a[i]==a[l])    k=i;
	}
	play(k+1);
	f[l].push_back(a[l]);
	if(k+1<=n)    for(int i=0;i<f[k+1].size();i++)    f[l].push_back(f[k+1][i]);
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool f=true; 
	for(int i=1;i<=n;i++){
		cin>>p[i];
		if(p[i]<p[i-1])    f=false;
	}
	if(f){
		for(int i=1;i<=m;i++)    cout<<i<<" ";
		return 0;
	}
	a.push_back(0);
	for(int i=2;i<=n;i++){
		while(p[i]==p[i-1])    i++;
		a.push_back(p[i-1]);
	}
	if(p[n]!=p[n-1])    a.push_back(p[n]);
	n=a.size();
	for(int i=n;i>=1;i--){
		play(i);
	}
	for(int i=1;i<=m;i++)    cout<<ans[i]<<" ";
	return 0;
}
