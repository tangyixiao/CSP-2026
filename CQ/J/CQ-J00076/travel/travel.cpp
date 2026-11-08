#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int c1,c2,S1,S2;
string s1,s2;
char a,b,c,d,s1z,s2z;;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	a=s1[0],b=s1[1],s1z=s1[2];
	c=s2[0],d=s2[1],s2z=s2[2];
	S1=a*10+b;
	S2=c*10+d;
	if(c1==c2){
		cout<<1;
		if(S1==S2){
			cout<<1;
			if(s1z=='A'||s1z=='B'||s1z=='C'){
				if(s2z=='A'||s2z=='B'||s2z=='C'){
					cout<<1;
				}else{
					cout<<0;
				}
			}else if(s1z=='D'||s1z=='F'){
				if(s2z=='D'||s2z=='F'){
					cout<<1;
				}else{
					cout<<0;
				}
			}
			if(s1z=='A'&&s2z=='B'){
				cout<<1;
			}
			else if(s1z=='B'&&s2z=='C'){
				cout<<1;
			}
			else if(s1z=='B'&&s2z=='A'){
				cout<<1;
			}
			else if(s1z=='C'&&s2z=='B'){
				cout<<1;
			}
			else if(s1z=='D'&&s2z=='F'){
				cout<<1;
			}else if(s1z=='F'&&s2z=='D'){
				cout<<1;
			}else{
				cout<<0;
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	
	return 0;
}
