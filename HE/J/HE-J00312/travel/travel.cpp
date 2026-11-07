#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2,a1,a2,q1,q2;
int main(){
freopen("travel.in","r",stdin);
freopen("travel.out","w",stdout);
    cin>>c1>>s1>>c2>>s2;
    if(c1==c2){
	cout<<1;
	}
	else{
	cout<<0;
	}
	for(int i=0;i<3;i++){
	if(s1[i]>='0'&&s1[i]<='9'){
	a1+=s1[i];
	}
	if(s1[i]>='A'&&s1[i]<='Z'){
	q1+=s1[i];
	}
	if(s2[i]>='0'&&s2[i]<='9'){
	a2+=s2[i];
	}
	if(s2[i]>='A'&&s2[i]<='Z'){
	q2+=s2[i];
	}
	}
	if(a1==a2&&c1==c2){
	cout<<1;
	}
	else{
	cout<<0;
	}
	if(a1==a2&&(q1[0]=='A'&&q2[0]=='B')||(q1[0]=='A'&&q2[0]=='C')||(q1[0]=='B'&&q2[0]=='C')||(q1[0]=='D'&&q2[0]=='F')||(q1[0]=='B'&&q2[0]=='A')||(q1[0]=='C'&&q2[0]=='A')||(q1[0]=='C'&&q2[0]=='B')||(q1[0]=='F'&&q2[0]=='D')&&c1==c2){
	cout<<1;
	}
	else{
	cout<<0;
	}
	if(a1==a2&&((q1[0]=='A'&&q2[0]=='B')||(q1[0]=='B'&&q2[0]=='C')||(q1[0]=='D'&&q2[0]=='F')||(q1[0]=='B'&&q2[0]=='A')||(q1[0]=='C'&&q2[0]=='B')||(q1[0]=='F'&&q2[0]=='D'))&&c1==c2){
	cout<<1;
	}
	else{
	cout<<0;
	}
return 0;
}
