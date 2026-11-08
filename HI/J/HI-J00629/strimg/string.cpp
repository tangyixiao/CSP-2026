#include<bits/stdc++.h>
using namespace std;
string c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	int n,m;
	string s;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m>>s;
		for(int j=0;j<m;j++){
			c+=s;
		}
		
	}
	if (n==1){
		cout<<0;
	}
	return 0;
} 
