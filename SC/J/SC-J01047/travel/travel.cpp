#include <bits/stdc++.h>
using namespace std;
int sum,ans;
bool row(char a,char b){
	if(a>='A'&&a<='C'&&b<='C'&&b>='A'){
		return true;
	}
	if(a>='D'&&a<='E'&&b<='E'&&b>='D'){
		return true;
	}
	return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	for(int i=0;i<2;i++){
		sum*=10;
		sum+=s1[i]-'0';
		ans*=10;
		ans+=s2[i]-'0';
	}
	char z1=s1[2];
	char z2=s2[2];
	if(c1==c2){
		cout << 1;
	}else{
		cout << 0;
	}
	
	if(sum==ans&&c1==c2){
		cout << 1;
	}else{
		cout << 0;
	}
	
	if(sum==ans&&c1==c2&&row(z1,z2)==true){
		cout << 1;
	}else{
		cout << 0;
	}
	if(sum==ans&&c1==c2&&row(z1,z2)==true&&abs(z1-z2)==1){
		cout << 1;
	}else{
		cout << 0;
	}
}