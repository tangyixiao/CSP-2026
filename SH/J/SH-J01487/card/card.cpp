#include<bits/stdc++.h>
using namespace std;
int a[51000],tab[51000],cnt[31000];
int main(){
	freopen("card.in","w",stdin);
	freopen("card.out","r",stdout);
	int n,m; cin>>n>>m;	
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i = 1;i<=n;i++){
		cnt[i] = 0;
	}
	for(int s=1;s<=n;s++){
		for(int i = 0;i<=n;i++)tab[i] = 0;
		
		for(int i=s;i<=n;i++){//Ò»»ØºÏ 
			bool check = false;
			int pos = 0;
			for(int j = s;j<=i;j++){
				if(tab[j] == a[i]){
					check = true; 
					pos = j;
				}
				} 
			if(!check)tab[i] = a[i];
			if(check){
				for(int j = pos;j<=i;j++)tab[j] = 0;
				tab[i] = a[i];
			}
		}
		for(int i = s;i<=n;i++)if(tab[i] > 0)cnt[tab[i]]++;
		//for(int i = s;i<=n;i++)cout<<tab[i]<<' ';
		//cout<<'\n';
	}
	for(int i = 1;i<=m;i++){
		cout<<cnt[i]<<' ';
	}
	return 0;
}
