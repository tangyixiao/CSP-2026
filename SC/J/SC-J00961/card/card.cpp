#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int>v;
	int idx[100001];
	memset(idx,0,sizeof(idx));
	int ans[100001];
	memset(ans,0,sizeof(ans));
	int a[200000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(idx[a[j]]==0){
				v.push_back(a[j]);
				idx[a[j]]=v.size();
			}else{
				for(int k=idx[a[i]];k<v.size();k++){
					idx[v[k]]=0;
				}
				v.erase(v.begin()+idx[a[i]],v.end());
			}
		}
		for(int j=1;j<=m;j++){
			if(idx[j]){
				ans[j]++;
			}
		}
		v.erase(v.begin(),v.end());
		memset(idx,0,sizeof(idx));
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}