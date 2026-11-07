#include<bits/stdc++.h>
using namespace std;
struct node{
	int l;int r;
}b[5005];
int n,m,a[5005],cnt[5005],k[5005],ans[5005],t[5005];
bool bl[5005],br[5005],f[5005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool fl=0,f3=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		t[a[i]]++;
		if(a[i]<a[i-1]){
			fl=1;
		}
	}
	if(!fl){
		for(int i=1;i<=n;i++){
			cnt[a[i]]++;
		}
		int ss=0;
		for(int i=1;i<=m;i++){
			ss+=cnt[i];
			if(cnt[i]>0){
				cout<<ss<<" ";
			}
			else{
				cout<<"0 ";
			}
		}
		return 0;
	} 
	for(int i=1;i<=m;i++){
		if(t[i]>2){
			f3=1;
		}
	}
	if(f3==0){
		for(int i=n;i>=1;i--){
		cnt[a[i]]=max(cnt[a[i]],i);
	}
	int x=1,y=n;
	while(x<=y){
		if(bl[a[x]]==0){
			b[a[x]].l=x;
			
			bl[a[x]]=1;
		}
		x++;
		if(br[a[y]]==0){
			b[a[y]].r=y;
			
			br[a[y]]=1;
		}
		y--;
	}
	for(int i=1;i<=n;i++){
		if(bl[a[i]]&&br[a[i]]&&f[a[i]]==0){
			for(int j=b[a[i]].l+1;j<b[a[i]].r;j++){
				//cnt[a[j]]--;
				k[j]--;
			}
			f[a[i]]=1;	
		}
		
	}
	for(int i=1;i<=n;i++){
		ans[a[i]]=max(i+k[i],ans[a[i]]);
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	}else if(m==2){
		int u,v;
		for(int i=1;i<=n;i++){
			if(i==1){
				u=i;
			}else{
				v=i;
			}
		}
		cout<<u<<" "<<v;
		return 0;
	}
	else{
		for(int i=n;i>=1;i--){
			cnt[a[i]]=max(cnt[a[i]],i);
		}
		for(int i=1;i<=m;i++){
			cout<<cnt[i];
		}
	}
	return 0;
}
