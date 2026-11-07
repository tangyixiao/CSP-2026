#include<bits/stdc++.h>
using namespace std;
long long n,ain;
char x;
string s;
void find(long long time){
	for(long long i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-i-1]){
			time++;
		}
	}
	cout<<time;
	return;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long k=1;k<=n;k++){
		cin>>ain>>x;
		for(long long j=1;j<=ain;j++){
			s+=x;
		}
	}
	find(0);
	return 0;
}