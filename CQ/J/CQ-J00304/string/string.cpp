#include<bits/stdc++.h>
using namespace std;
int n,x,lon,ans;
string a;
char b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		cin>>b;
		for(int j=1;j<=x;j++){
			a+=b;
			lon++;
		}	
	}
	int l2=lon;
	while(l2>lon/2){
		if(a[lon-l2]!=a[l2-1]){
			ans++;
		}
		l2--;
	}
	cout<<ans;
	return 0;
}
