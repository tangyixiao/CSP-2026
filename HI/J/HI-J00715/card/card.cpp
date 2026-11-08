#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[500010],ist[300010],cnt[300010];


int main() {
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	bool f=true;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(a[i-1]>a[i]) f=false;
		cnt[a[i]]=i;
	}
	if(m==1){
		printf("%d",n);
		return 0;
	}
	if(f){
		for(int i=1;i<=m;i++) printf("%d ",cnt[i]);
		return 0;
	}
	bool s[300010];
	memset(cnt,0,sizeof(cnt));
	for(int i=1;i<=n;i++){
		memset(ist,0,sizeof(ist));
		memset(s,1,sizeof(s));
		for(int j=i;j<=n;j++){
			s[a[j]]=0;
			cnt[a[j]]++;
			if(!ist[a[j]]) ist[a[j]]=j;
			else{
				for(int k=ist[a[j]]+1;k<j;k++){
					if(s[a[k]]) continue;
					ist[a[k]]=0;
					s[a[k]]=1;
					cnt[a[k]]--;
				}
				cnt[a[j]]--;
				ist[a[j]]=j;
			} 
		}
		
	}
	for(int i=1;i<=m;i++) printf("%d ",cnt[i]);
	
	return 0;
}

