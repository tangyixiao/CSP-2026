#include<bits/stdc++.h>
using namespace std;
char arr;
string s;
int ans;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a;
	for(int i=1;i<=n;i++){
		cin>>a>>arr;
		for(int j=1;j<=a;j++){
			s+=arr;
		}
	}
	int len=s.size();
	int m=len-1;
	for(int i=0;i<len/2;i++){
		if(m!=0){
			if(s[m]!=s[i])ans++;
		}
		m--;
	}
	cout<<ans;
	return 0;
}
//Trick||Treat!
