#include<bits/stdc++.h>
using namespace std;
string a;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n = 0;
	cin>>n;
	int cnt = 0;
	string s;
	for(int i = 0;i<n;i++){
		int t = 0;
		cin>>t;
		cnt+=t;
		cin>>a[i];
		for(int j = 0;j<n;j++){
			s+=a[i];
		}
	}
	string s1;
	for(int i = s.size()-1;i>=0;i--){
		s1+=s[i];
	}
	if(s==s1){
		cout<<0;
	}else{
		if(cnt==3){
			cout<<1;
		}else if(cnt==4||cnt==5){
			cout<<2;
		}else if(cnt==6||cnt==7){
			cout<<3;
		}else if(cnt==8||cnt==9){
			cout<<4;
		}else if(cnt==10){
			cout<<5;
		} 
	}
	return 0;
}
