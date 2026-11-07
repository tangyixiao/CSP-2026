#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,ans,a[N];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<m;i++){
		ans=a[i]&a[i+1];
	}
	printf("%d",ans);
	return 0;
}
