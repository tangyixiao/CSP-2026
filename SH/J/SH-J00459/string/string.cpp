#include<bits/stdc++.h>
using namespace std;
long long a[200010];
char b[200010];
int p(int x){
	if(x%2==1)	return x/2+1;
	return x/2;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	int y;
	string x,s="";
	for(int i=1;i<=n;i++){
		cin>>y>>x;
		for(int j=1;j<=y;j++){
			s+=x;
		}
	}
	long long l=s.size();
	long long cnt=0;
	for(int i=0;i<l/2;i++){
		if(s[i]!=s[l-i-1])	cnt++;
	}
	cout<<cnt;
	return 0;
} 
