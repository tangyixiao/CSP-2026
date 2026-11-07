#include<bits/stdc++.h>
using namespace std;
int ans[300005];
int cnt[300005];
int t[500005]; 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	int a[500005];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	}
	for(int i=1;i<=n;i++){
		memset(cnt,0,sizeof(cnt));	
		int x=0;
		for(int j=i;j<=n;j++){
			if(cnt[a[j]]==0){
				cnt[a[j]]+=1;
				x++;
				t[x]=a[j];
			}
			else{
				int x1;
				for(int v=1;v<=x;v++){
					if(t[v]==a[j]){
						x1=v;
						break;
					}
				}
				for(int v=x1+1;v<=x;v++){
					cnt[t[v]]-=1;
				}
				x=x1;
			}
		}	
		for(int j=1;j<=x;j++){
			ans[t[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" "; 
	}
	fclose(stdin);
	fclose(stdout); 
	return 0; 
}