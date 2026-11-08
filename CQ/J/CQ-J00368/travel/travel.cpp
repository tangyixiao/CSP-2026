#include<bits/stdc++.h>
#define Is_inky_ya ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sofree freopen("travel.in","r",stdin);freopen("travel.out","w",stdout);
#define endl '\n'
using namespace std;
using lint = long long ;
using doubao = long double;
string c1,s1,c2,s2;
int main(){
#ifndef AKIOI
	Is_inky_ya 
#endif
	sofree
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		if((s1[0]==s2[0])&&(s1[1]==s2[1])){
			cout<<1; 
			if(((s1[2]<='C')&&(s2[2]<='C'))||((s1[2]>'C')&&(s2[2]>'C'))){
				cout<<1;
				if(abs(s1[2]-s2[2])==1){
					cout<<1<<endl;
				}else{
					cout<<0<<endl;
				}
			}else{
				cout<<"00"<<endl;
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000"<<endl;
	}
	return 0;
}
