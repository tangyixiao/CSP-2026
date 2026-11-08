#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long c,n,h[10];
	string b,e[10];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>c>>b;
		e[i]=b;
		h[i]=c;
	}
	if(n<=1){
		cout<<0;
		return 0;
	}
	else if(n<=2){
		if(e[0]==e[1]){
			cout<<0;
		}
		else if(h[0]>h[1]){
			cout<<h[1];
		}
		else{
			cout<<h[0];
		}
	}
	return 0;
}
