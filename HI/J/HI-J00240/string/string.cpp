#include<bits/stdc++.h>
using namespace std;
string f[100005],z[100005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a,sum=0,cnt=0;
	string s,d,b;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		for(int j=1;j<=a;j++){
			s+=b;
		}
	}
	for(int i=s.size();i>=0;i--){
		d+=s[i-1];
	}
	for(int i=0;i<s.size();i++){
		if(d[i]==s[i])
			cnt++;
	}if(cnt==s.size()){
		cout<<sum;
		return 0;
	}
		
	for(int i=0;i<s.size();i++){
		if(d[i]!=s[i])
			sum++;
	}	
	cout<<sum/2;
		
	return 0;
}
