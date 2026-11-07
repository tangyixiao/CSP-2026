#include<bits/stdc++.h>
using namespace std;
int n,m;
bool flag=true;
int flag;
vector<int> a(500010);
vector<int> cnt(300010);
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i>1){
			if(a[i]<a[i-1]) flag=false;
			if(a[i]!=a[i-1]) flag1++;
		}
	}
	if(flag){
		for(int i=1;i<=n;i++) cnt[a[i]]++;
		for(int i=1;i<=m;i++) cout<<cnt[i]<<" ";
	} else if(n<=5000){
		for(int i=1;i<=n;i++){
			int xb=i-1;
			vector<int> lb(500010);
			vector<int> near(300010,0);
			for(int j=i;j<=n;j++){
				if(near[a[j]]==0) lb[++xb]=a[j],near[a[j]]=xb;
				else {
					for(int k=xb;k<=near[a[j]];k++) near[lb[k]]=0;
					xb=near[a[j]];
				} 
			}
			for(int j=i;j<=xb;j++){
				cnt[lb[j]]++;
			}
		}
		for(int i=1;i<=m;i++) cout<<cnt[i]<<" ";
	} if(flag1<=4999){
		for(int i=1;i<=n;i++) cnt[a[i]]++;
		for(int i=1;i<=m;i++) cout<<cnt[i]<<" ";
	}
		return 0; 
}
