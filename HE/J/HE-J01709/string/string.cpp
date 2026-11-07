#include<bits/stdc++.h>
using namespace std;
string s;

int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	int n;
	cin >>n;
	if(n==1){
		cout<<0;
		return 0;
	}
	for(int i=1;i<=n;i++){
		int a;
		cin >>a;
		string b;
		cin >>b;
		for(int j=1;j<=a;j++){
			s+=b;
		}
	}
	cout <<s;
	return 0;
	
}
