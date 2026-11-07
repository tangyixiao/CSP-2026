#include <bits/stdc++.h>
using namespace std;
string s;
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long L,ans=0;
	int n,l,flag=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>l>>c;
	s+=memcpy(l,c);
	}
	L=s.length();
	for(int i=0;i<(L+1)/2;i++){
		if(s[i]==s[L-i-1]){
			continue;
		}
		else{
			flag=1;
			ans++;
		}
	}
	if(flag==0){
		cout<<0;
		return 0;
	}
	else if(flag==1){
		cout<<ans;
	}
	return 0;
}
