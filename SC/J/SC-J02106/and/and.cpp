#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+1e3;
int n,m,a[N],p[N];
vector<int>w[31ll],as;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int op=a[i];
		as.clear();
		while(op>0){
			as.push_back(op%2);
			op/=2;
		}
		int st=0;
		for(int k:as){
			if(k)w[st].push_back(a[i]);
			st++;
		}
	}
	vector<int> v1,v2;
	bool bz=1,xz[N],ans[31];
	for(int i=30;i>=0;i--){
//		cout<<w[i].size();
		if(w[i].size()>=m){
			v2.clear();
			for(int j:w[i]){
				if(xz[j]==1||bz)v2.push_back(j);
				if(bz)xz[j]=1;
			}
			if(bz){
				v1=v2;
				bz=0;
				ans[i]=1;
				continue;
			}
			if(v2.size()<m)continue;
			ans[i]=1;
			for(int k:v1){
				xz[k]=0;
			}
			v1.clear();
			for(int k:v2){
				xz[k]=1;
				v1.push_back(k);
			}
		}
	}
	if(v1.empty())cout<<0;
	else{
		int answer=0,pe=1;
		for(int i=0;i<=30;i++){
			answer+=ans[i]*pe;
			pe*=2;
		}
		cout<<answer;
	}
	return 0;
}