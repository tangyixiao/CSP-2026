#include<bits/stdc++.h>
using namespace std;
long long k[1000005];
struct node{
	long long x;
	char y;
}a[1000005];
long long n,R,cnt;
string s;
bool cmp(long long a,long long b){
	return a>b;
}
long long hw(string s){
	int len=s.size();
	for(int i=0;i<=len/2;i++){
		if(s[i]!=s[len-i]) R++; 
	}
	return R;
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].x>>a[i].y,cnt+=a[i].x;
	for(int i=1;i<=n;i++) k[int(a[i].y-'0')]+=a[i].x;
	sort(k+int('a'-'0'),k+int('z'-'0')+1,cmp);
	if(k[49]==cnt/2&&cnt%2==0||k[49]>cnt/2){
		cout<<cnt-k[49];
		return 0;
	}
	if(k[49]==cnt/2&&cnt%2==0) cout<<cnt-k[49]-1;
	for(int i=1;i<=n;i++) for(int j=1;j<=a[i].x;j++) s+=a[i].y;
	cout<<hw(s);
}