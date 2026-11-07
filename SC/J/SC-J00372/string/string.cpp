#include<bits/stdc++.h>
using namespace std;
long long n,cnt;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		long long a;
		char c;
		cin>>a>>c;
		for(int i=1;i<=a;i++)s+=c;
	}
	//cout<<s;
	int len=s.size()/2;
	//cout<<len<<" "<<s[len];
	for(int i=0;i<=s.size()/2;i++){
		int j=s.size()-1-i;
			//cout<<s[i]<<" "<<s[j];
			//cout<<endl;
			if(s[i]!=s[j])cnt++;
	}
	cout<<cnt;
	return 0;
}