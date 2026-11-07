#include <bits/stdc++.h>
using namespace std;
int a[4];
int main(){
	freopen(travel.in,"r",stdin);
	freopen(travel.out,"o",stdout);
long long o,b;
	string n,m;
	cin>>o>>n>>b>>m;
	if(o==b){
	a[0]=1;	
	if(n[0]==m[0]&&n[1]==m[1]){
	a[1]=1;	
		if(n[2]=='A'||n[2]=='B'||n[2]=='C'){
		if(m[2]!=n[2]&&(m[2]=='A'||m[2]=='B'||m[2]=='C')){
		a[2]=1;
		if(m[2]==n[2]+1||m[2]==n[2]-1){
			a[3]=1;
		}	
		}
	}else{
		if(m[2]!=n[2]&&(m[2]=='D'||m[2]=='E')){
			a[2]==1;
			a[3]==1;
		}
	}
	}
	
	}
	
cout<<a[0]<<a[1]<<a[2]<<a[3];
	return 0;
}
