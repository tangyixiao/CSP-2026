#include<bits/stdc++.h>
/*
pts 100
times 8:56
up_date \
*/
using namespace std;
typedef long long ll;
typedef pair<int,int> pt;
const int N = 1e5 + 1000 ;
string c1,c2;
string s1,s2;
int main (){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	string a=s1.substr(0,s1.length()-1);
	string b=s2.substr(0,s2.length()-1);
	char q1=s1[s1.length()-1];
	char q2=s2[s2.length()-1];
	if(a==b)	cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	if((q1=='A'||q1=='B'||q1=='C')&&(q2=='A'||q2=='B'||q2=='C')){
		cout<<1;
		if(abs((int)q1-(int)q2)==1)	cout<<1;
		else	cout<<0;
	}
	else	if((q1=='D'||q1=='F')&&(q2=='F'||q2=='D')){
		cout<<"11";
	}else	cout<<"00";
	return 0;
}