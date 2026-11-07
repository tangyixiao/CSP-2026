#include<bits/stdc++.h>
using namespace std;
bool A(int a,int b){
	if(a==b) return 1;
	else return 0;
}
bool B(string x,string y){
	if(A){
		int sumx=0,sumy=0;
		for(int i=0;i<=1;i++)
		 	sumy+=y[i];
		for(int i=0;i<=1;i++)
		 	sumx+=x[i];
		if(sumx==sumy) return 1;
		else return 0;
		}
	else return 0;
}
bool C(string n,string m){
	if(B){
		if(n[2]=='A'||n[2]=='B'||n[2]=='C'&&m[2]=='A'||m[2]=='B'||m[2]=='C') return 1;
		if(n[2]=='D'||n[2]=='F'&&m[2]=='D'||m[2]=='F') return 1;
		else return 0;
	}
	else return 0;
}
bool D(string e,string f){
	if(C){
		if(e[2]=='A'&&f[2]=='B'||e[2]=='B'&&f[2]=='C'||e[2]=='C'&&f[2]=='B'||e[2]=='B'&&f[2]=='A'||e[2]=='D'&&f[2]=='F') return 1;
		else return 0;
	}
	else return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>c2>>s1>>s2;
	cout<<A(c1,c2)<<B(s1,s2)<<C(s1,s2)<<D(s1,s2);
	return 0;
	}

	
