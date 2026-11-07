#include<bits/stdc++.h>
using namespace std;
int s1,c1;
string s2,c2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>c2>>s1>>s2;
	if(c1!=s1){
		cout<<"0000";
	}
	else{
		cout<<1;
		if(c2[0]==s2[0] && c2[1]==s2[1]){
			cout<<1;
			if((s2[2]<='C' && c2[2]<='C') || (s2[2]>'C' && c2[2]>'C')){
				cout<<1;
				if(abs(s2[2]-c2[2])==1)
				cout<<1;
				else
				cout<<0;
			}
			else
			cout<<"00";
		}
		else
		cout<<"000";
	}
		return 0; 
}
