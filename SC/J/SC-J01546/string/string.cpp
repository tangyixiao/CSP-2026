#include<bits/stdc++.h>
using namespace std;
//awa
int n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;//今年的是不是太难了QAQ
	char last;
	bool f=1;
	string s="";
	long long sum=0;
	long long len=0;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		char c;
		cin>>c;
		if(i==1) last=c;
		if(c!=last) f=0;
		len+=x;
		for(int j=1;j<=x;j++){
			s+=c;
		}
	}
	if(f==1){
		cout<<0;
		return 0;
	}
	s=" "+s;
	for(long long i=1;i<=len;i++){
		if(s[i]!=s[len+1-i]){
			sum++;
		}
	}
	cout<<sum/2;
	return 0;
}