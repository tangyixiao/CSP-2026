#include<bits/stdc++.h>
using namespace std;
string C1,S1,C2,S2;
int Seat(char a){
	if(a<='C') return 0;
	else return 1;
}
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>C1>>S1>>C2>>S2;
	string s=S1.substr(0,2);
	string t=S2.substr(0,2);
	char a=S1[2];
	char b=S2[2];
//	cout<<s<<" "<<a<<"\n";
//	cout<<t<<' '<<b<<'\n';
	if(C1!=C2) cout<<0;
	else cout<<1;
	
	if(C1!=C2) cout<<0;
	else if(s==t) cout<<1;
	else cout<<0; 
	
	if(C1!=C2) cout<<0;
	else if(s!=t) cout<<0;
	else if(Seat(a)==Seat(b)) cout<<1;
	else cout<<0;
	
	if(C1!=C2) cout<<0;
	else if(s!=t) cout<<0;
	else if(Seat(a)!=Seat(b)) cout<<0;
	else if(abs(int(a-b))>1) cout<<0;
	else cout<<1;
	return 0;
} 
