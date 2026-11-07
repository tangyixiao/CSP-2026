#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	int n;
	long long sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int t;
		cin>>t;
		string st;
		cin>>st;
		for(int j=1;j<=t;j++){
			s+=st;
		}
	}//ÊäÈë
	long long len=s.size();
	for(int i=0;i<len/2;i++){
		if(s[i]!=s[len-i-1])sum++;
	}
	cout<<sum;
	return 0;
}
