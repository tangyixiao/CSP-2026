#include<bits/stdc++.h>
using namespace std;
string a1,a2,b1,b2;
int ans;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>b1>>a2>>b2;
	if(a1==a2){
		cout<<1;
	}else{
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0;
		return 0;
	}
	if(b1[0]==b2[0] and b1[1]==b2[1]){
		cout<<1;
	}else{
		cout<<0;
		cout<<0;
		cout<<0;
		return 0;
	}
	if(b1[2]<'D' and b2[2]<'D'){
		cout<<1;
		if(b1[2]=='A' and b2[2]=='C'){
			cout<<0;
			ans=1;	
		}
		else if(b1[2]=='C' and b2[2]=='A'){
			cout<<0;
			ans=1;
		}
		else{
			cout<<1;
			ans=1;	
		}
	}
	else if(b1[2]>'C' and b2[2]>'C'){
		cout<<1;
	}else{
		cout<<0;
	}
	if(ans==0 and b1[2]=='C' and b2[2]=='D'){
		if(b1[2]=='D' and b2[2]=='C'){
			cout<<1;
			ans=1;
		}
	}
	if(ans==0) cout<<0;
return 0;
}
