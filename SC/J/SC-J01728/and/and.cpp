#include<bits/stdc++.h>
using namespace std;
long long s[200005];
bool two[200005][50];
long long n,m;
long long ans=0;
void dfs(vector<long long >z,long long d){
	if(d<0)return ;
	vector<long long >z1;
	for(int i=0;i<z.size();i++){
		if(two[z[i]][d])z1.push_back(z[i]);
	}
	if(z1.size()>=m){
		ans+=pow(2,d);
		d--;
		dfs(z1,d);
	}else{
		d--;
		dfs(z,d);
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>s[i];
	sort(s+1,s+1+n);
	for(int i=1;i<=n;i++){
		long long l=s[i],k=0;
		while(l){
			if(l&1)two[i][k]=true;
			l/=2;
			k++;
		}
	}
	vector<long long>k;
	for(int i=1;i<=n;i++)k.push_back(i);

	dfs(k,31);
	cout<<ans;
	return 0;
}