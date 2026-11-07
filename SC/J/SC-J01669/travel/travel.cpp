#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
set<string> q;
int m,n;
int check(char ah,char bh){
	int a=int(ah);
	int b=int(bh);
	if(ah>='D') a++;
	if(bh>='D') b++;
	if(abs(a-b)==1) return 1;
	else return 0;
}
int main(){
    freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>s1>>s2>>s3>>s4;
	q.insert(s1);
	q.insert(s3);
	if(q.size()==2){
		cout<<"0000";
		return 0;
	}
	else cout<<"1";
	m=s2[0]-'0';
	m*=10;
	m+=s2[1]-'0';
	n=s4[0]-'0';
	n*=10;
	n+=s4[1]-'0';
	if(m==n) cout<<"1";
	else{
		cout<<"000";
		return 0;
	} 
	if(((s2[2]<='C'&&s4[2]<='C')||(s2[2]>='D'&&s4[2]>='D'))&&m==n){
		cout<<"1";
		
	}
	else cout<<"0";
	if((m==n&&check(s2[2],s4[2])==1)||(abs(m-n)==1&&s2[2]==s4[2])){
		cout<<"1";
	}
	else cout<<"0";
	return 0;
}  