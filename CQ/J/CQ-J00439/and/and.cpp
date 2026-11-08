#include<bits/stdc++.h>
using namespace std;
//using ll=long long;
#define int long long
int a[200005];
int n,m,s,c;
vector<int>t[40],d,e;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int x=a[i];
		for(int j=1;x;j++){
			if(x&1)t[j].push_back(i);
			x/=2;
		}
	}
	for(int i=35;i>=1;i--){
		if(d.size()==0&&t[i].size()>=m){
			d=t[i];
			s+=(1<<(i-1));
			continue;
		}
		c=0;e.clear();
		for(int j=0;j<d.size();j++){
			int l=0,r=t[i].size()-1;
			while(l<=r){
				int mid=(l+r)/2;
				if(t[i][mid]>d[j]){
					r=mid-1;
				}
				else{
					l=mid+1;
				}
			}
			if(t[i][r]==d[j])c++,e.push_back(d[j]);
		}
		if(c>=m){
			s+=(1<<(i-1));
			d=e;
		}
	}
	cout<<s;
	return 0;
}

