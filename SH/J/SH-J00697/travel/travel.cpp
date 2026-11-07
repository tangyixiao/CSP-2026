#include <bits/stdc++.h>
using namespace std;
bool is_to(string a,string b){
	char x=a[2],y=b[2];
	if (x=='D' && y=='F'||x=='F' && y=='D') return true;
	if (x=='A' && y=='B'||x=='B' && y=='A') return true;
	if (x=='B' && y=='C'||x=='C' && y=='B') return true;
	return false;
}
int main(){
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	int side1=0,side2=0;
	cin>>c1>>s1>>c2>>s2;
	if (s1[2]=='D'||s1[2]=='F') side1=1;
	if (s2[2]=='D'||s2[2]=='F') side2=1;
	if (c1==c2){
		cout<<1;
		int tmp1=0,tmp2=0;
		for(int i=0;i<=1;i++){
			tmp1=tmp1*10+(s1[i]-'0');
			tmp2=tmp2*10+(s2[i]-'0');
		}
		if (tmp1==tmp2){
			cout<<1;
			if (side1==side2){
				cout<<1;
				if (is_to(s1,s2)){
					cout<<1;
				}
				else cout<<0;
			}
			else cout<<0<<0;
		}
		else cout<<0<<0<<0;
	}
	else{
		cout<<0<<0<<0<<0;
	}
	
	return 0;
} 
