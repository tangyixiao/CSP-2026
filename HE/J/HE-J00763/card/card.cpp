#include <bits/stdc++.h>
using namespace std;
int a[500005],cnt[300005];
bool flag[300005];
int table[50005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++) cin >> a[i];
	for(int i=1;i<=n;i++){
		memset(flag,0,sizeof(flag));
		int len=0;
		for(int j=i;j<=n;j++){
			if(!flag[a[j]]){
				table[++len]=a[j];
				flag[a[j]] = 1;
			}
			else{
				int k;
				for(k=1;k<=len && table[k]!=a[j];k++);
				while(k <= len) flag[table[k]]=0,table[k++]=0;
				table[++len]=a[j];
				flag[a[j]]=1;
			}
		}
		while(len != 0){
			cnt[table[len]]++;
			table[len--]=0;
		}	
	}
	for(int i=1;i<=m;i++) cout << cnt[i] << ' ';
	return 0;
}
