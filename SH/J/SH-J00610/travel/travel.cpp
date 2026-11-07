#include <bits/stdc++.h>
using namespace std;
int n1,n2,h1,h2,l1,l2;
bool f = 1;
string s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>n1>>s1>>n2>>s2;
	int u = s1[0] - '0';
	int v = s1[1] - '0';
	int w1 = s1[2] - 'A' + 1;
	l1 = u*10 + v;
	u = s2[0] - '0';
	v = s2[1] - '0';
	int w2 = s2[2] - 'A' + 1;
	l2 = u*10 + v;
	if(n1 == n2){
		cout<<1;
	}
	else{
		cout<<0;
		f = 0;
	}
	if(l1 == l2 && f){
		cout<<1;
	}
	else{
		cout<<0;
		f = 0;
	}
	if(((w1<=3 && w2<=3) || (w1>3 && w2>3) ) && f){
		cout<<1;
	}
	else{
		cout<<0;
		f = 0;
	}
	if(abs(w1 - w2) == 1 && f){
		cout<<1;
	}
	else{
		cout<<0;
	}
} 
