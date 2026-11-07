#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int a=1,b=1,c=1,d=1;
	if(c1[0]=='0'&&c1[1]>='2'&&c1[1]<='9'){
		a=1;
	}else if(c1[0]=='1'&&c1[1]>='0'&&c1[1]<'8'&&c1[1]!='6'){
		a=1;
	}else a=0;
	if(c2[0]=='0'&&c2[1]>='2'&&c2[1]<='9'){
		b=1;
	}else if(c2[0]=='1'&&c2[1]>='0'&&c2[1]<'8'&&c2[1]!='6'){
		b=1;
	}else b=0;
	if(a==1&&b==1&&c1[0]+c1[1]==c2[0]+c2[1]){
		if(s1[0]=='0'&&s1[1]>'0'&&s1[1]<='9')c=1;
		else if(s1[0]=='1'&&s1[1]>='0'&&s1[1]<='8')c=1;
		else c=0;
		
		if(s2[0]=='0'&&s2[1]>'0'&&s2[1]<='9')d=1;
		else if(s2[0]=='1'&&s2[1]>='0'&&s2[1]<='8')d=1;
		else d=0;
		
		bool ok=0;
		if(c==1&&d==1&&s1[0]+s1[1]==s2[0]+s2[1]){
			if(s1[2]>='A'&&s1[2]<='C'){
				if(s2[2]>='A'&&s2[2]<='C'){
					ok=1;
				}
				else{
					cout<<"1100";
				}
			}
			if(s1[2]=='D'||s1[2]=='F'){
				if(s2[2]=='D'||s2[2]=='F'){
					ok=1;
				}
				else{
					cout<<"1100";
				}
			}
			if(ok){
				int ook=0;
				char p=s1[2],q=s2[2];
				if(p>q)swap(p,q);
				if(p=='A'&&q=='B')ook=1;
				if(p=='B'&&q=='C')ook=1;
				if(p=='D'&&q=='F')ook=1;
				if(ook==1)cout<<"1111";
				else cout<<"1110";
			}
		}else{
			cout<<"1000";
		}
	}else cout<<"0000";
}