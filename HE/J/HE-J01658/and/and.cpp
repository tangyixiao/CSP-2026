#include<bits/stdc++.h>
using namespace std;
int a[200010];
int n,m,mx;
bool b[5]={false};
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","W",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(a[i],mx);
		b[i]=true;
	}
	if(m==1){
		cout<<mx;
	}else if(m==2){
		mx=-1e9;
		for (int i=1;i<=n;i++){
			for (int j=i;j<=n;j++){
				mx=max((a[i]&a[j]),mx);
			}
		}cout<<mx;
	}else if(mx<=4){
		if(b[2]&&b[3])cout<<2;
		else if(b[1]&&b[3])cout<<1;
		else cout<<0;
	}
	return 0;
}

