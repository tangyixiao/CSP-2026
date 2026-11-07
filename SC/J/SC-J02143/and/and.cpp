#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m,a[N];
struct node{
	int val,state;
}s[N];
int main(){
//	freopen("C:\\Users\\user\\Desktop\\输入.txt","r",stdin);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	for(int i=1;i<=n;i++){
		s[i].val=a[i],s[i].state=1;
	}
	int ans=0;
	for(int k=30;k>=0;k--){
		int tot=0;
		for(int i=1;i<=n;i++){
			if(s[i].state)tot+=((s[i].val>>k)&1);
		}
		if(tot>=m){
			ans+=(1<<k);
			for(int i=1;i<=n;i++){
				if(s[i].state){
					if(((s[i].val>>k)&1)==0)s[i].state=0;
				}
			}
		}
	}
	printf("%d",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}