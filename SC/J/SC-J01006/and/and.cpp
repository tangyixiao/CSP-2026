#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N],n,m;
bool f1[N],f2[N];
vector<int> h[N];
void count(int x,int id){
	for(int i=0;i<=30;i++){
		if((x>>i)&1){
			h[i].push_back(id);
		}
	}
}
int suan(){
	int num=0;
	for(int i=1;i<=n;i++){
		if(f2[i]) num++;
	}
	return num;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	memset(f1,true,sizeof(f1));
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		count(a[i],i);
	}
	int ans=INT_MAX;
	bool op=false;
	for(int i=30;i>=0;i--){
		int len1=h[i].size();
		if(len1<m) continue;
		for(int j=0;j<len1;j++){
			if(f1[h[i][j]])
				f2[h[i][j]]=true;
		}
		int len2=suan();
		if(len2==m){
			op=true;
			for(int j=0;j<len1;j++){
				if(f2[h[i][j]]) ans&=a[h[i][j]];
			}
			break;
		}
		if(len2>m)
			swap(f1,f2);
		memset(f2,false,sizeof(f2));
	}
	if(!op){
		for(int i=1;i<=n;i++){
			if(f1[i]) ans&=a[i];
		}
	}
	cout<<ans;
	return 0;
}