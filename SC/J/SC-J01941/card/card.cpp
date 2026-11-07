#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],flag[300005],b[500005],ans[300005],f;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(flag[a[i]]){
			b[flag[a[i]]]=i;
		}
		flag[a[i]]=i;
	}
	for(int j=1;j<=n;j++){
		f=0;
		for(int i=j;i<=n;){
			if(!b[i]){
				ans[a[i]]++;
				i++;
			}
			else{
				f++;
				i=b[i];
			}
		}
		if(f==0){
			for(int i=n;i>j;i--){
				ans[a[i]]+=i-j;
			}
			break;
		}
	}
	for(int i=1;i<=m;i++){
		printf("%d ",ans[i]);
	}
	return 0;
}