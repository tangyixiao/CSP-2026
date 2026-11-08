#include<bits/stdc++.h>
using namespace std;
#define int long long
//luogu id:afewdgre
int n,a[200005],num;
char s[200005];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
		num+=a[i];
	} 
	int idl=1,idr=n,ans=0;
	while(idl<=idr){
		if(a[idl]<=a[idr]){
			if(s[idl]!=s[idr]) ans+=a[idl];
			a[idr]-=a[idl],idl++;
		}
		else{
			if(s[idl]!=s[idr]) ans+=a[idr];
			a[idl]-=a[idr],idr--;	
		}
	}
	cout<<ans;
}


