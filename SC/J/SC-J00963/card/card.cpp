#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[int(5e5+5)];
int b[int(3e5+5)];
int c[int(5e5+5)];
int ans[int(3e5+5)];
bool f[int(3e5+5)];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;++i){
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		memset(f,0,sizeof(f));
		for(int j=i+1;j<=n;j++){
			if(b[a[j]]==0){
				b[a[j]]=j;
			}
			else{
				
				c[b[a[j]]]-=1e6;
				c[j]+=1e6;
				b[a[j]]=j;
			}
		}
		for(int j=i+1;j<=n;j++){
			c[j]+=c[j-1];
			if(c[j]>=0){
				if(!f[a[j]]){
					f[a[j]]=1;
					ans[a[j]]++;
				}
			}
		}
		
	}
	for(int i=1;i<=m;i++){
		printf("%d ",ans[i]);
	}
	fclose(stdin);fclose(stdout);
	return 0;
}