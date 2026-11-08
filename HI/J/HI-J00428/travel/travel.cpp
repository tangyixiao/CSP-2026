#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	int b=s1.size();
	int d=s2.size();
	if(c1==c2){
		cout << 1;
	}else{
		cout << 0;
	}
	string x,y;
	for(int i=0;i<b-1;i++){
		x.push_back(s1[i]);
	}
	for(int i=0;i<d-1;i++){
		y.push_back(s2[i]);
	}
	if(x==y){
		cout << 1;
	}else{
		cout << 0;
	}
	char n=s1[b-1];
	char m=s2[d-1];
	if(x==y){
		if(n=='E'&&m=='F'||n=='F'&&m=='E'){
			cout << 1;
		}else if(abs(n-m)<=2&&n<='C'&&n>='A'&&m<='C'&&m>='A'){
			cout << 1;
		}else{
			cout << 0;
		}
	}else{
		cout << 0;
	}
	if(x==y&&abs(n-m)==1&&n<='C'&&n>='A'&&m<='C'&&m>='A'||x==y&&n<='F'&&n>='E'&&m<='F'&&m>='E'){
		cout << 1;
	}else{
		cout << 0;
	}
	return 0;
}
