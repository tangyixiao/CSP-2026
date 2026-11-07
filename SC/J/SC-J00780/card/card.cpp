#include<bits/stdc++.h>
#define N 500005
using namespace std;
int n,m;
int a[N],ans[N];
int pos[N],num[N];
bool f[N];
void banbaoli(int x){
	for(int i=x;i<=n;){
		if(pos[i])i=pos[i];
		else{
			ans[a[i]]++;
			i++;
		}
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(num[a[i]]==0)num[a[i]]=i;
		else{
			pos[num[a[i]]]=i;
			num[a[i]]=i;
		}
	}
	for(int i=1;i<=n;i++)banbaoli(i);
	for(int i=1;i<=m;i++)printf("%d ",ans[i]);
	return 0;
}