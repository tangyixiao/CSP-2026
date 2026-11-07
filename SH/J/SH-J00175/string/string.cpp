#include<bits/stdc++.h>
using namespace std;
long long n,a[200005];
char c[200005];
char s[10000000],S[10000000];
int s1,S1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=s1;i>=0;i--){
		S[++S1]=s[i];
	}
	long long sum=0;
	for(int i=1;i<=s1;i++){
		if(s[i]!=S[i]){
			sum++;
		}
	}
	cout<<sum/2;
	return 0;
} 
