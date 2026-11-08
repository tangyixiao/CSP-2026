#include<bits/stdc++.h>
using namespace std;
int n;
int m;//¼ÆÊý 
string s;
string c;
string k;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		long long a;
		char b;
		cin>>a>>b;
		for(int i=1;i<=a;i++){
			s+=b;
		}
	}
	for(int i=s.size()-1;i>=0;i--){
		c+=s[i];
	}
	if(s==c){
		cout<<"0"<<endl;
	}
	
	return 0; 
}
