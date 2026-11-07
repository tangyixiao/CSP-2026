#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e5+10;
string a,b,c,d;
int get(char ch){
	if(ch=='A') return 1;
	if(ch=='B') return 2;
	if(ch=='C') return 3;
	if(ch=='D') return -1;
	if(ch=='E') return -2;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a!=c){
		cout<<"0000";
		return 0;
	}
	if(b[0]!=d[0] || b[1]!=d[1]){
		cout<<"1000";
		return 0;
	}
	int i=get(b[2]),j=get(d[2]);
	if(i*j<0){
		cout<<"1100";
		return 0;
	}
	if(abs(i-j)!=1){
		cout<<"1110";
		return 0;
	}
	cout<<"1111";
	return 0;
}
