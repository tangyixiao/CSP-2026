#include<bits/stdc++.h>
using namespace std;
string s[100005];
int c[100005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>c[i]>>s[i];
	}
	if(n==1){
		cout<<"0";
	}
	if(n==2){
		if(s[0]==s[1]){
			cout<<"0";
		}else{
			cout<<min(c[0],c[1]);
		}
	}
}
