#include<bits/stdc++.h>
using namespace std;
int pd(string s){
	string v=s;long long cnt=0;
	reverse(s.begin(),s.end());
	if(s==v){
		return 0;
	}
	
	else{
		for(int i=0;i<s.size();i++){
			if(s[i]!=v[i]){
				cnt++;
			}
		}
	}
	return cnt;
}

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;cin>>n;
	string s;
	for(int i=1;i<=n;i++){
		long long a;char c;
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	cout<<pd(s);
	return 0;
}
