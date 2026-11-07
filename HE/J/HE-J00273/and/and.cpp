#include<bits/stdc++.h>	
using namespace std;
void syx(int a){
	string s,b;
	while(a>0){
		s+=a%2-'0';
		a/=2;
	}
	for(int i=s.length()-1;i>=0;i--){
		b+=s[i];
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a;
		if(i==n){
			cout<<a;
		}
	}
	return 0;
}
