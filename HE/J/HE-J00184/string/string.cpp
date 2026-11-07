#include<bits/stdc++.h> 
using namespace std;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a1,c=0,c2=0;
	char a2;
	cin>>n;
	if(n==1){
		cout<<"0";
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a1>>a2;
		for(int j=0;j<a1;j++){
			s[c++]=a2;
		}
	}
	long long l=c-2,cnt=0;
	for(int i=0;i<c/2;i++){
		if(s[i]!=s[l+1-i]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
