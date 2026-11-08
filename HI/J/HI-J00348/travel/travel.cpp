#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1;
	cin>>c1;
	string s1;
	cin>>s1;
	int c2;
	cin>>c2;
	string s2;
	cin>>s2;
	
	
	
	if(c1!=01&&c1!=16){
		if(c1=c2)
		cout<<1;
	}
	else{
		cout<<0;
	}
	
	cout<<1;
	
	if(c2!=01&&c2!=16){
		if(c2=c1)
		cout<<1;
	}
	else{
		cout<<0;
	}
	
	
	
	cout<<0;
	
	
	
	
	
	
	return 0;
}
