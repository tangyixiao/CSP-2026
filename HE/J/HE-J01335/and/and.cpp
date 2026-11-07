#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int>put;
vector<vector<int> >res;
bool eye[200005];
void dfs(int c){
	if(put.size()==m){
		res.push_back(put);
		return;
	}
	for(int i=0;i<n;i++){
		put.push_back(i);
		dfs(i);
		put.pop_back();
	}
}
int k[200005];
int cct[200005];
int a=0;
string pus;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	memset(eye,1,sizeof(eye));
	for(int i=0;i<n;i++){
		cin>>k[i];
	}
	int mx=INT_MIN;
	if(m==1){
		for(int i=0;i<n;i++){
			mx=max(k[i],mx);
		}
		cout<<mx;
		return 0;
	}
	dfs(1);
	int mmax=INT_MIN;
	for(int i=0;i<res.size();i++){
		bool bl=false;
		int u;
		bool f[200005];
		memset(f,0,sizeof(f));
		for(int j=0;j<res[i].size();j++){
			u=k[res[i][0]];
			if(res[i].size()==m&&f[res[i][j]]==false){
				u&=k[res[i][j]];
				f[res[i][j]]=true;
			}
			else u=0;
			mmax=max(mmax,u);
		}
		u=0;
	}
	cout<<mmax;
	return 0;
}
