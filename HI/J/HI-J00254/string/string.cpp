#include<bits/stdc++.h>
using namespace std;
string k="";
int h(string m,string n){
	for(int i=0;i<m.size();i++){
		k+=m[i];
	}
	if(k==n) return 1;
	else return 0;
}

int main(){
	freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
	int n,a,c=0;
	string m,b;
	cin>>n;
	while(n--){
		cin>>a>>b;
		c+=a;
		for(int i=1;i<=a;i++){
			m+=b;
		}
		
	}
	if(h(m,m)){
		cout<<0;
			return 0;
	}
		cout<<c/2;
	return 0;
}
