#include <bits/stdc++.h>
using namespace std;
const long long N=1e6+10;
struct k{
	long long gs;
	string zm;
}a[N];
long long c;
string y;
bool pd;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	vector<string>x;
	vector<string>k;
	long long n;
	cin>>n;
	long long cnt=0;
	for(long long i=1;i<=n;i++){
		cin>>a[i].gs>>a[i].zm;
		cnt+=a[i].gs;
		for(long long j=1;j<=a[i].gs;j++){
			x.push_back(a[i].zm);
		}
	}
	k=x;
	reverse(x.begin(),x.end());
	if(x==k) pd=true;
	if(pd){
		cout<<0;
		return 0;
	}
	long long maxn=0;
	for(long long i=1;i<=n;i++){
		maxn=max(maxn,a[i].gs);
	}
	if(cnt%2==0){
		cout<<cnt-maxn;
	}else{
		cout<<cnt-maxn-1;
	}
	return 0;
}
