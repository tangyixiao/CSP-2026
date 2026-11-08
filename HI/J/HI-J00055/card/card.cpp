#include<bits/stdc++.h>
using namespace std;
int a[500005],b[300005];
int c[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	a[0]=INT_MIN;
	bool xx=true;
	for(int i=1;i<=n;i++){
		if(!a[i]>a[i-1]) xx=false;
		cin>>a[i];
		c[a[i]]++;
	}
	if(xx){
		for(int i=1;i<=m;i++){
			if(c[i]!=0) cout<<c[i]<<" ";
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		vector<int> v;
		for(int j=i;j<=n;j++){
			bool tr=true;
			for(int l=0;l<v.size();l++){
				if(v[l]==a[j]||!tr){
					tr=false;
					v[l]=-1;
				}
			}
			v.push_back(a[j]);
		}
		for(int j=0;j<v.size();j++){
			if(v[j]!=-1) b[v[j]]++;
		}
	}
	for(int i=0;i<300005;i++){
		if(b[i]!=0) cout<<b[i]<<" ";
	}
	return 0;
}
