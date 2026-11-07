#include <bits/stdc++.h>
using namespace std;
int l[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,mx=-1,Mx=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>l[i];
	}
	/*for(int i=1;i<=n;i++){
		cout<<l[i]<<' ';
	}*/
	//cout<<endl;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(l[j]>=mx){mx=l[j];Mx=j;}
		}
		//cout<<mx<<' '<<Mx<<' '<<i<<endl;
		if(i<m){l[Mx]=0;mx=-1;}
		else cout<<mx<<endl;
		
	}
	return 0;
}
