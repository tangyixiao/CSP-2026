#include<iostream>
#include<vector>
#include<cstdio>
#define ll long long
using namespace std;
int n,m,l[500005];
ll ans[300005];
int read(){
	char a;
	a=getchar();
	while(a<'0'||a>'9') a=getchar();
	int ret=0;
	while(a>='0'&&a<='9'){
		ret=ret*10+a-'0';
		a=getchar();
	}
	return ret;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) l[i]=read();
	for(int j=1;j<=n;j++){
		vector<int> v;
		bool t[300005]={0};
		int id[300005]={0};
		for(int i=j;i<=n;i++){
			if(t[l[i]]==0){
				v.push_back(l[i]);
				t[l[i]]=1;
				id[l[i]]=v.size();
			}
			else{
				while(v.size()>id[l[i]]){
					t[v[v.size()-1]]=0;
					v.pop_back();
				}
			}
		}
		for(auto it:v){
			ans[it]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}