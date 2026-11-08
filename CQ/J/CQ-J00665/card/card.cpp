#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],b[300005],s[300005],c[300005];
int main(){
	freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[a[i]]++;
		s[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		for(int j=n+1-i;j<=n;j++){
			if(b[a[j]]>1){
				j=s[a[j]];
			}
			c[a[j]]++;
	    }
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}
