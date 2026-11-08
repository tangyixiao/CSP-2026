#include<bits/stdc++.h>
using namespace std;
string s,b;
struct a1{
	int o;
	char m;
}a[200005];
int n,sum1;
int main(){
	freopen("string.in",'r',stdin);
	freopen("string.out",'w',stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].o>>a[i].m;
		while((a[i].o)--) s+=a[i].m;
	} 
	b=s;
	reverse(s.begin(),s.end());
	for(int i=1;i<=b.size();i++){
		if(b[i]!=s[i]) sum1++;
	}
	if(sum1%2==0) cout<<sum1/2;
	else cout<<sum1/2+1;
	return 0;
} 
