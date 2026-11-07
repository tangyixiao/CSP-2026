#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
vector<int>c[50];
vector<int>an;
bool v[200005];
int ans=INT_MAX,z;
signed main(){
	freopen("and.in","r",stdin);freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		for(int j=30;j>=0;j--){
			int k=a[i];
			if(k&(1<<j)){
				c[j].push_back(a[i]);
			}
		}
	}
	for(int i=30;i>=0;i--){
		if(c[i].size()<m)continue;
		if(c[i].size()==m&&an.empty()){
			for(int j=0;j<c[i].size();j++)an.push_back(c[i][j]);
			break;
		}
		else if(an.empty()){
			for(int j=0;j<c[i].size();j++)an.push_back(c[i][j]);
			z=an.size();
		}
		else{
			int shu=0;
			for(int j=0;j<an.size();j++){
				if(v[j])continue;
				if(!bool(an[j]&(1<<i)))shu++;
			}
			if(z-shu<m)continue;
			for(int j=0;j<an.size();j++){
				if(v[j])continue;
				if(!bool(an[j]&(1<<i)))v[j]=1;
			}
			z-=shu;
		}
		if(z==m)break;
	}
	for(int i=0;i<an.size();i++){
		if(!v[i]){
			ans&=an[i];
		}
	}
	if(ans!=INT_MAX)
	cout<<ans;
	else cout<<0;
	return 0;
} 