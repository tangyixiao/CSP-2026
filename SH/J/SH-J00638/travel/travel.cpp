#include<bits/stdc++.h>
using namespace std;
long long c1,c2;
string s1,s2;
bool check(char x,char y){
	if(x>y) swap(x,y);
	if(x=='C' || x=='F') return false;
	if(x=='A' && !(y=='B' || y=='C')) return false;
	if(x=='B' && !y=='C') return false;
	return true;
}
int check2(char x,char y){
	if(x>y) swap(x,y);
	if((x=='A' && y=='B') || (x=='B' && y=='C') || (x=='D' && y=='F')) return 1;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin.tie(0);
	cout.tie(0); 
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000"<<"\n";
		return 0;
	}else{
		if(s1[0]!=s2[0] || s1[1]!=s2[1]){
			cout<<"1000"<<"\n";
			return 0;
		}else{
			if(!check(s1[2],s2[2])){
				cout<<"1100"<<"\n";
				return 0;
			}else cout<<111<<check2(s1[2],s2[2])<<'\n';
		}
	}
	return 0;
}
