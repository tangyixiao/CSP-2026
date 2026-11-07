#include<bits/stdc++.h>
#define lnt long long
#define endl '\n'
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("travel.in","r",stdin); 
	freopen("travel.out","w",stdout); 
	int a,b,c,d;char cc,dd;
	cin>>a>>c>>cc>>b>>d>>dd;
	//cout<<a<<b<<c<<d<<cc<<dd;
	if(a!=b){
		cout<<"0000";
		return 0;
	}
	if(c!=d){
		cout<<"1000";
		return 0;
	}
	if((cc=='D'&&dd=='F')||(cc=='F'&&dd=='D')){
		cout<<"1111";
		return 0;
	}
	if((cc=='D'||cc=='F')&&dd!='D'&&dd!='F'){
		cout<<"1100";
		return 0;
	}
	if((dd=='D'||dd=='F')&&cc!='D'&&cc!='F'){
		cout<<"1100";
		return 0;
	}
	if((cc=='A'&&dd=='C')||(cc=='C'&&dd=='A')){
		cout<<"1110";
		return 0;
	}
	cout<<"1111";
	return 0;
} 
