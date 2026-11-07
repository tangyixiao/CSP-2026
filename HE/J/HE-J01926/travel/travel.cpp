#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<'1';
	}
	else{
		for(int i=1;i<=4;i++){
			cout<<'0';
		}
	}
	if(b==d){
		cout<<'1';
	}
	else{
		cout<<'0';
	}
	if(c==a){
		cout<<'1';
	}
	else{
		cout<<'0';
	}
	if(d==b){
		cout<<'1';
	}
	else{
		cout<<'0';
	}
	return 0; 	
}
