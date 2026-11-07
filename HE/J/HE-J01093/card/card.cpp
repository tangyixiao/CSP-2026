#include<bits/stdc++.h>
using namespace std;
int n,m,z[500001],ans[300001];
vector<int> a;
vector<int> b;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int p=0;p<n;++p) cin>>z[p];
	for(int i=0;i<n;++i){
		a.clear();
		b.clear();
		for(int v=0;v<n;++v) a.push_back(z[v]);
		for(int j=i;j<n;++j)
			if(b.empty()) b.push_back(a[j]);
			else
				for(int k=0;k<b.size();++k)
					if(b[k]==a[j]){
						for(int q=k;q<b.size();++q) b.pop_back();
						b.push_back(a[j]);
					}else{
						b.push_back(a[j]);
					}
		for(int x=1;x<=m;++x)
			for(int y=0;y<b.size();++y)
				if(b[y]==x){
					++ans[x];
					break;
				}
	}
	for(int i=1;i<=m;++i) cout<<ans[i]<<' ';
	return 0;
}
