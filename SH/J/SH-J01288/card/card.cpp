#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],t[300005],pos,f[500005],ans[300005];
bool flag;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]){
			flag=1;
		}
	}
	if(!flag){
		for(int i=n;i>=1;i--){
			f[++pos]=a[i];
			if(t[a[i]]==0){
				t[a[i]]=pos;
			}else{
				pos=t[a[i]];
			}
			for(int j=1;j<=pos;j++){
				ans[f[j]]++;
			}
		}
	}else{
		for(int k=1;k<=n;k++){
			memset(t,0,sizeof(t));
			memset(f,0,sizeof(f));
			pos=0;
			for(int i=k;i<=n;i++){
				f[++pos]=a[i];
				if(t[a[i]]==0){
					t[a[i]]=pos;
				}else{
					for(int j=t[a[i]]+1;j<pos;j++){
						t[f[j]]=0;
						f[j]=0;
					}
					f[pos]=0;
					pos=t[a[i]];
				}
			}
			for(int i=1;i<=pos;i++){
				ans[f[i]]++;
			}
		}
	}
	
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
