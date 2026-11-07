#include<bits/stdc++.h>
using namespace std;
string s="";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a;
		cin>>c;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	long long len=s.size();
	long long ban=(len-1)/2;
	bool o=1;
	long long cnt=0;
	for(long long i=0;i<ban;i++){
		if(s[i]!=s[len-i-1]){
			o=0;
			cnt++;
		}
	}
	if(o){
		cout<<"0";
	}
	else{
		cout<<cnt;
	}
	return 0;
}

