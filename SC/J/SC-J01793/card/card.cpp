#include <bits/stdc++.h>
#include <vector>
using namespace std;

int n,m;
int a[500010],ans[300010];
int k[300010];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		int s[500010];
		memset(k,0,sizeof(k));
		int pl=1;
		for(int j=i;j<=n;j++,pl++){
			s[pl]=a[j];
			k[a[j]]++;
			if(k[a[j]]>1){
				s[pl]=0;
				k[s[pl]]--;
				pl--;
				for(;pl>0;pl--){
					if(s[pl]==a[j]){
						break;
					}
					s[pl]=0;
					k[s[pl]]--;
				}
				
			}
		}
		bool s2[m+3];
		for(int i=1;i<=n;i++){
			s2[i]=false;
		}
		for(int j=1;j<=pl-1;j++){
			if(s2[s[j]]>0){
				continue;
			}
			ans[s[j]]++;
			s2[s[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		printf("%d ",ans[i]);
	}
}