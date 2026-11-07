#include<bits/stdc++.h>
using namespace std;
int t[5005],tsi=0;
int h(int a){
	int f=-1;
	for(int i=1;i<=tsi;i++){
		if(t[i]==a) f=i;
	}
	return f;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[5005],s[5005]={};
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int j=1;j<=n;j++){
		memset(t,0,sizeof(t));
		tsi=0;
		for(int i=j;i<=n;i++){
			if(h(a[i])!=-1){
				int hai=h(a[i]);
				for(int i=h(a[i]);i<=tsi;i++){
					t[i]=0;
				}
				tsi=hai-1;
			}
			t[++tsi]=a[i];
		}
		for(int i=1;i<=tsi;i++) s[t[i]]++;
	}
	for(int i=1;i<=m;i++){
		cout<<s[i]<<" ";
	}
	return 0;
}