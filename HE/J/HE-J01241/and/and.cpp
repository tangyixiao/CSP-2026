#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a[N];
int ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	for(int k=29;k>=0;k--){
		int cnt=0;
		for(int i=1;i<=n;i++){
			if(((ans&a[i])==ans)&&((a[i]>>k)&1)) cnt++;
		}
		if(cnt>=m) ans|=(1<<k);
	}
	printf("%d",ans);
	return 0;
}//Will you love me any more? 
