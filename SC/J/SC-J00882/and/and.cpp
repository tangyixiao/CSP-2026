#include<bits/stdc++.h>
using namespace std;

int n,m,ans=0; 
vector<int>a;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	
	for(int i=1;i<=n;i++){
		int x;
		scanf("%d",&x);
		a.push_back(-x);
	}
	
	sort(a.begin(),a.end());
	ans-=a[0];
	for(int i=1;i<m;i++){
		ans&=(-a[i]);
	}
	printf("%d",ans);
	return 0;
} 