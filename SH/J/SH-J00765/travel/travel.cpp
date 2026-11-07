#include<iostream>
using namespace std;
bool issmsd(char x,char y){
	if (x=='A' || x=='B' || x=='C'){
		return (y=='A' || y=='B' || y=='C');
	}else{
		return (y=='D' || y=='F');
	}
}
bool isnxt(char x,char y){
	if (x=='A' || x=='C'){
		return (y=='B');
	}else if (x=='B'){
		return (y=='A' || y=='C');
	}else return (y=='D' || y=='F');
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		if (s1[0]==s2[0] && s1[1]==s2[1]){
			cout<<1;
			if (issmsd(s1[2],s2[2])){
				cout<<1;
				if (isnxt(s1[2],s2[2])){
					cout<<1;
				}else cout<<0;
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
}
