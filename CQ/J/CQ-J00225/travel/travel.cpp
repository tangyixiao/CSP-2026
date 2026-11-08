#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int a,b,c,d;
int check(char c){
	if(c=='A'||c=='B'||c=='C') return 0;
	return 1;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<=1;i++){
		a=a*10+c1[i]-'0';
	}
	for(int i=0;i<=1;i++){
		b=b*10+c2[i]-'0';
	}
	if(a!=b){
		cout<<"0000\n";
		return 0; 
	}
	for(int i=0;i<=1;i++){
		c=c*10+s1[i]-'0';
	}
	for(int i=0;i<=1;i++){
		d=d*10+s2[i]-'0';
	}
	if(c!=d){
		cout<<"1000\n";
		return 0;
	}
	int p=check(s1[2]),q=check(s2[2]);
	if(p!=q){
		cout<<"1100\n";
		return 0;
	}
	if(p==1){
		cout<<"1111\n";
		return 0;
	}
	if((s1[2]=='A'&&s2[2]=='C')||(s1[2]=='C'&&s2[2]=='A')){
		cout<<"1110\n";
		return 0;
	}
	cout<<"1111\n";
	return 0;
}

