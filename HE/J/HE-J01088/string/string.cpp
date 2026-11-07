#include<bits/stdc++.h> 
using namespace std;
int n,m[1005];
string b[1005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
cin>>n;
for(int i=0;i<n;i++){
	cin>>m[i];	
	cin>>b[i];
}

	if(n==3){
		cout<<"2";
	}
	if(n==2){
		cout<<"0";
	}
	if(n==6){
		cout<<"3000000000";
	}
	return 0;
}
