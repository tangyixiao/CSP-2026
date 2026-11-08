#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	int p=0;
	for(int i=0;i<2;i++){
		if(a[i]!=c[i]){
			p=1;
			cout<<"0";
			break;
		}
	}
	if(p==0){
	cout<<"1";	
	}
	int f=0;
	for(int i=0;i<2;i++){
		if(b[i]!=d[i] || p==1){
			f=1;
			cout<<0;
			break;
		}
	}
	if(f==0 && p==0) cout<<"1";
	int u=0;
	if(b[2]>=65 && b[2]<=67 && d[2]>=65 && d[2]<=67 &&f==0 && p==0){
		cout<<"1";
	}
	else{
		if(b[2]>=68 && b[2]<=70 && d[2]>=68 && d[2]<=70 && f==0 && p==0){
			cout<<"1";
		}
		else{
			u=1;
			cout<<"0";
		}
	}
	if(f==0 && u==0 && p==0){
		if(b[2]+1==d[2] || b[2]-1==d[2]){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
	}
	else{
		cout<<"0";
	}
	return 0;
}
