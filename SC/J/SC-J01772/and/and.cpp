#include<bits/stdc++.h>
using namespace std;	
int n,m,a[200005],mx=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int x=0;
		for(int j=i+1;j<=n;j++){
			if(x<=m){
				mx=max((a[i]&a[j]),mx);
				a[i]=(a[i]&a[j]);
				x++;
			}
			else{
				break;
			}
	    }
	}
	cout<<mx;
	return 0;
}
