#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"0000";
		return 0;
	}
	string x=s1;
	string y=s2;
	int ss=((x.size()-1))==(y.size()-1);
	if(x<='C' && y<='C'){
		x==y;
	}else if(x>='C' && y>='C'){
		x==y;
	}
	cout<<ss<<x<<y<<"1";
	
	
	return 0;
}
