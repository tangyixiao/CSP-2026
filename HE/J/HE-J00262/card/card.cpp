#include<bits/stdc++.h>
using namespace std;
int a[1000006],ans[500006];
vector<int> f(5E5);
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,L=0;
	scanf("%d%d",&n,&m); 
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		a[n+i]=a[i];
	}
	for(int i=1;i<=n;i++){
		f.clear();
		L=0;
		for(int j=1;j<=n;j++){
			if(*lower_bound(f.begin(),f.end(),a[i+j-1])!=0)
				L+=&a[i+j-1]-(a+i)+L;
			f.push_back(max(a[i+j-2],a[i+j-1]));
		}
		while(L<=n) ans[L++]++;
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<" ";
	return 0;
}
