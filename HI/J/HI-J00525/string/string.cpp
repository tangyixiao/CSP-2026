#include<bits/stdc++.h>
using namespace std;
vector<char> n,m;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int a,b,bb;
	char c;
	bool d=1;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b>>c;
		if(i==a/2){
			bb=b;
		}
		for(int j=0;j<b;j++){
			n.push_back(c);
		}
	}
	for(int i=n.size()-1;i>=0;i--){
		m.push_back(n[i]);
	}
	for(int i=0;i<n.size();i++){
		if(n[i]!=m[i]){
			d=0;
		}
	}
	if(d==1){
		cout<<0;
	}else{
		cout<<bb;
	}
	return 0;
}
