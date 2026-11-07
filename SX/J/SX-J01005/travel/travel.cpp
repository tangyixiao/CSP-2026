#include<bits/stdc++.h>
using namespace std;
int c1,c2,a;
string s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		for(int i=0;i<2;i++){
			if(s1[i]!=s2[i]){
				a=1;
				break;
			}
		}
		if(a==0){
			cout<<1;
			if((s1[2]<='C'&&s2[2]<='C')||(s1[2]>'C'&&s2[2]>'C')){
				cout<<1;
				if(s1[2]+1==s2[2]||s2[2]+1==s1[2]) cout<<1;
				else cout<<0;
			}
			else{
				cout<<0;
				cout<<0;
			}
		}
		else{
			cout<<0;
			cout<<0;
			cout<<0;
		}
	}
	else{
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0;
	}
	return 0;
}