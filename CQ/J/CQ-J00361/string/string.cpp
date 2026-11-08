#include<bits/stdc++.h>
using namespace std;
const long long N=2e5+5;
struct Node{
	string s;
	long long cnt;
}a[N];
long long n;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long len=0,o=0;
	string tmp=" ";
	for(long long i=1;i<=n;i++){
		cin>>a[i].cnt>>a[i].s;
		len+=a[i].cnt;
		for(int j=1;j<=a[i].cnt;j++){
			tmp+=a[i].s;
		}
	}
	long long mid=(len+1)/2,ans=0;
	for(int i=1;i<=mid;i++){
		if(tmp[i]!=tmp[len-i+1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
