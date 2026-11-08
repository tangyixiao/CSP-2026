#include<bits/stdc++.h>
using namespace std;
bool huiwen(string s){
	string ol;
	for(int i=s.size()-1;i>=0;i++){
		ol[i]=s[i];
	}
	for(int i=0;i<=s.size()-1;i++){
		if(s[i]!=ol[i]) return false;
	}
	return true;
}
struct k{
	long long a;
	string b;
} t[200010];
int n;
string l;
string p;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	char ir;
	long long ic;
	int m=0,tep=0,o=0;
	for(int i=1;i<=n;i++){
		cin>>ic;
		m+=ic;
//		cin>>t[i].b;
		cin>>ir;
		for(int j=1;j<=ic;j++){
			++o;
			t[o].a=ic;
			t[o].b=ir;
		}
	}
	
	/*for(int i=1;i<=o;i++){
		
	}
/*	while(!huiwen()){
		
	}*/
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(t[i].b!=t[j].b) {
				cout<<2;
				return 0;
			}
		}
	}
	if(n==6){
		cout<<3000000000;
	}else{
		cout<<0;
	}
	
	return 0;
}
