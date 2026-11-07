#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int x=0;
	string a,b;
	cin>>a>>b;
	for(int i=0;i<2;i++){
		if(a[i]!=b[i]){
			x=1;
			cout<<0<<0<<0<<0;
			return 0;
		} 
	}
	cin>>a>>b;
	x=0;
	for(int i=0;i<2;i++){
		if(a[i]!=b[i]){
			x=1;
			cout<<0<<0<<0;
			return 0;
		} 
	}
	if(x==0) cout<<1;
	if(a[2]<68&&b[2]<68||a[2]>67&&b[2]>67) cout<<1;
	else {
		cout<<0<<0;
		return 0;
	}
	if(abs(a[2]-b[2])==1) cout<<1;
	else cout<<0;
}