#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int c1,c2,h1,h2;
char a1,a2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	for(int i=0;i<s1.size()-1;i++){
		h1=h1*10+int(s1[i]-'0');
	}
	for(int i=0;i<s2.size()-1;i++){
		h2=h2*10+int(s2[i]-'0');
	}
	a1=s1[s1.size()-1];
	a2=s2[s2.size()-1];
	bool f1=0,f2=0,f3=0;
	if(c1==c2){
		cout << 1;
		f1=1;
	}
	else{
		cout << 0;
	}
	if(f1&&h1==h2){
		cout << 1;
		f2=1;
	}
	else{
		cout << 0;
	}
	if(f1&&f2&&((a1<='C'&&a2<='C')||(a1>='D'&&a2>='D'))){
		cout << 1;
		f3=1;
	}
	else{
		cout << 0;
	}
	if(f1&&f2&&f3&&abs(int(a1-a2))==1){
		cout << 1;
	}
	else{
		cout << 0;
	}
	return 0;
} 