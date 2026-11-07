#include<bits/stdc++.h>
using namespace std;
int a1,b1;
string a2,b2;
int f(string a){
	if(a[2]>='A'&&a[2]<='C') return 1;
	else return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>a1>>a2>>b1>>b2;
//	cout<<a1<<" "<<a2<<" "<<b1<<" "<<b2<<'\n';
	if(a1!=b1||a1<=1||a1==16||b1<=1||b1==16||b1>17||a1>17){
		for(int i=1;i<=4;i++) cout<<0;
		return 0;
	}
	else cout<<1;
	if(a2[0]==b2[0]&&a2[1]==b2[1]) cout<<1;
	else{
		for(int i=1;i<=3;i++) cout<<0;
		return 0;
	}
	if(f(a2)==f(b2)) cout<<1;
	else{
		for(int i=1;i<=2;i++) cout<<0;
		return 0;
	}
	if(int(a2[2]-'0')==int(b2[2]-'0')+1||int(a2[2]-'0')==int(b2[2]-'0')-1) cout<<1;
	else cout<<0;
	return 0; 
} 