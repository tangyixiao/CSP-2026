#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N],n,m,ans;
int main(){
	freopen("and.in","r",stdin),freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	for(int i=29;i>=0;i--){
		int k=ans|(1<<i),c=0;
		for(int j=0;j<n;j++)c+=((a[j]&k)==k);
		if(c>=m)ans=k;
	}
	printf("%d\n",ans);
}