#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a,t=0,sum=0;
	string s;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>s;
		t=t+a;
	}
	for(int i=0;i<s.size();i++){
		if(s[i]!=s[t]){
			s[t]==s[i];
			sum++;
			t--;
		}
	}
	cout<<sum;
	return 0;
}