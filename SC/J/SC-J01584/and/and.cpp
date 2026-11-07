#include<bits/stdc++.h>
using namespace std;
int n,m,a[200001];
int main(){
	freopen("and.in","r",stdin);freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;++i)  scanf("%d",&a[i]);
	sort(a+1,a+n+1);
	int ans=a[n];
	for(int i=1;i<=m;++i){
		ans=a[n-i+1]&a[i];
	}
	printf("%d",ans);
	fclose(stdin);fclose(stdout);
	return 0;
}