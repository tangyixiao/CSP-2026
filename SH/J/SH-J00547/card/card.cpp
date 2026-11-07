#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int a[N],last[N],old[N];
int ans[N],last_pos[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int flag=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		old[i]=-1;
		if(i!=1&&a[i]<a[i-1])flag=0;
		last_pos[a[i]]=i;
	}
	if(flag){
		for(int i=1;i<=m;i++){
			cout<<last_pos[i]<<" ";
		}
		return 0;
	}
	for(int i=n;i>=1;i--){
		last[i]=old[a[i]];
		if(old[a[i]]==-1)old[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		int nw=i;
		ans[a[i]]++;
		while(nw<=n){
			if(last[nw]!=-1)nw=last[nw];
			nw++;
			if(nw<=n)ans[a[nw]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
}

/*

    /\   /\
   ( o   o )
   (  ---  )     ÉñÊÞ±£ÓÓ 
      | \
   --|   \--
     -----
     |   \
     
*/
