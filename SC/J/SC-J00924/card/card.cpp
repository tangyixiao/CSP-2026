#include<bits/stdc++.h>
using namespace std;
int n,m,a[500001],table[300001],ans[300001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	bool b[300001];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) b[j]=false;
		int len=0;
		for(int j=i;j<=n;j++){
			for(int l=0;l<len;l++){
				if(table[l]==a[j]){
					for(int i=l;i<=len;i++){
						table[i]=0;
					}
					len=l;
					break;
				}
			}
			table[len]=a[j];
			len++;
		}
		for(int j=0;j<len;j++){
			if(b[table[j]]) continue;
			ans[table[j]]++;
			b[table[j]]=true;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	fclose(stdin);
	fclose(stdout);
	return 0;
}