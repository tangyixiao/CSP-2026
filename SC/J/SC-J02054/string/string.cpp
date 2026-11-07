#include<bits/stdc++.h>
using namespace std;

int n,x;
char a;
long long cnt;
string s;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x>>a;
		for(long long j=1;j<=x;j++){
			s+=a;
		}
	}
	for(long long i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-i-1]){
			s[s.size()-i-1]=s[i];
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}