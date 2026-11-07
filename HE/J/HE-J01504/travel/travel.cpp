#include<bits/stdc++.h>
using namespace std;
string c1,c2,c3,c4;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>c2>>c3>>c4;
	if(c1!=c3){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	if(c2[1]!=c4[1])  {
		cout<<"000";
		return 0;
	}cout<<1;
	if(((c2[2]=='A'||c2[2]=='B'||c2[2]=='C')&&(c4[2]=='A'||c4[2]=='B'||c4[2]=='C'))
		||((c2[2]=='D'||c2[2]=='F')&&(c4[2]=='D'||c4[2]=='F'))) cout<<1;
		else cout<<0;
	if((c2[2]=='A'||c2[2]=='C')&&c4[2]=='B'){
		cout<<1;
		return 0;
	} 
	if(c2[2]=='B'&&(c4[2]=='A'||c4[2]=='C')){
		cout<<1;
		return 0;
	}
	if((c2[2]=='F'&&c4[2]=='D')||(c4[2]=='F'&&c2[2]=='D')){
		cout<<1;
		return 0;
	}
	cout<<0;
	return 0;
}

