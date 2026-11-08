#include<bits/stdc++.h>
using namespace std;
int n,m,a[500002],f[300002];
vector<int>e;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)scanf("%d",a+i);
	for(int i=1;i<=n;i++){
		e.clear();
		for(int j=i;j<=n;j++){
			e.push_back(a[j]);
			if(find(e.begin(),e.end(),a[j])!=e.end())
				e.erase(find(e.begin(),e.end(),a[j]),e.end()-1);
		}
		for(int j:e)f[j]++;
	}
	for(int i=1;i<=m;i++)printf("%d ",f[i]);
	return 0;
}
