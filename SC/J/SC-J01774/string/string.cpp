#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	long long a,n,cnt=0;
	string c;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		while(a--) s+=c;
	}
	int len=s.size();
	bool f=0;
	for(int i=0;i<=len/2;i++){
		if(s[i]==s[len-i-1]) f=1;
		else{f=0;break;}
	}
	if(f){
		cout<<0;
		return 0;
	} 
	else{
		for(int i=0;i<=len/2;i++){
			if(s[i]!=s[len-i-1]) cnt++;
		}
	}
	cout<<cnt;
	return 0;
}