#include<bits/stdc++.h>
using namespace std;
long long a[200005];
bool huiwen(string i){
	string ii;
	for(int k=i.size()-1;k>=0;k--){
		ii+=i[k];	
	}
	if(i==ii){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	string s;
	if(n==2){
		long long aa1,aa2;
		string bb1,bb2;
		cin>>aa1>>bb1>>aa2>>bb2;
		if(aa1>aa2){
			cout<<aa2;
			return 0;
		}
		if(aa1<aa2){
			cout<<aa1;
			return 0;
		}
		if(aa1==aa2){
			cout<<0;
			return 0;
		}
	}
	for(int i=1;i<=n;i++){
		long long aa;
		string bb;
		cin>>aa>>bb;
		for(int j=1;j<=aa;j++){
			s+=bb;
		}
	}
	if(n==1){
		cout<<0;
		return 0;
	}
	
	if(huiwen(s)){
		cout<<0;
		return 0;
	}
	long long cnt=0;
	if(s.size() % 2==0){
		long long zuo=s.size()/2-1;
		long long you=s.size()/2;
		for(long long i=0;i<=s.size()/2;i++){
			if(s[zuo-i+1]!=s[you+i-1])
			cnt++;
		}
		cout<<cnt;
		return 0; 
	}
	else{
		long long zuo=(s.size()-1)/2-1;
		long long you=(s.size()+1)/2;
		for(long long i=0;i<=(s.size()-1)/2;i++){
			if(s[zuo-i+1] != s[you+i-1]){
				cnt++;
			}
		}
		cout<<cnt;
		return 0;
	}
}