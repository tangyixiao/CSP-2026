#include<bits/stdc++.h>
using namespace std;
struct node{
	long long x;
	char s;
}a[100005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,ans=0;
	string s1;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].s;
		for(int j=1;j<=a[i].x;j++){
			s1+=a[i].s;
		}
	}
	string s2=s1;
	reverse(s2.begin(),s2.end());
	for(int i=0;i<=s1.size()/2-1;i++){
		if(s1[i]!=s2[i]) ans++;
	}
	cout<<ans;
}
