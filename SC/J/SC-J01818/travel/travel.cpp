#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	char a=s1[2],b=s2[2];
	if(c1!=c2) cout<<0<<0<<0<<0; 
	else{
		cout<<1;
		if(s1[0]!=s2[0]||s1[1]!=s2[1]) cout<<0<<0<<0;
		else{
			cout<<1;
			if((a=='D'&&b=='F')||(b=='D'&&a=='F')) cout<<1<<1;
			if(a>='A'&&a<='C'&&b>='A'&&b<='C'){
				cout<<1;
				if(a-b==1||b-a==1) cout<<1;
				else cout<<0;
			}
			else cout<<0<<0;
		}
	}  
	return 0;
} 