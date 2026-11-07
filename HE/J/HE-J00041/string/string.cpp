#include<bits/stdc++.h>
using namespace std;
#define int long long
struct nt{
	int num,id;
	string c;
}a[20005];
string s;
int sum[20005],n;
bool tp(){
	string x=a[1].c;
	for(int i=1;i<=n;i++){
		if(a[i].c!=x)
			return 0;
	}
	return 1;
}
bool cmp(nt x,nt y){
	return x.num<y.num;
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int len=0;bool f=0;
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].c;
		len+=a[i].num;
		a[i].id=i;
	}
	string s;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i].num;j++){
			s+=a[i].c;
		}
	}
	int ans=0;
	for(int i=0;i<len/2;i++)
		if(s[i]!=s[len-i+1])
			ans++;
	cout<<ans;
}

