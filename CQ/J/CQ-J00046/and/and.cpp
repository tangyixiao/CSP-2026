#include <bits/stdc++.h>
using namespace std;
int n,a[200001],m,ans;
int And(int &M,int as){
	if(M==0){
		return as;
	}
	M--;
	for(int i=M-m+1;i<=n;i++)
		as=max(as&a[i],And(m,as));
	return as;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)
		ans=max(a[i],And(m,a[i]));
	printf("%d",ans);
}
