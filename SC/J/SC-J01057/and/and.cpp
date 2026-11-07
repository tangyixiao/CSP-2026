#include<bits/stdc++.h>
using namespace std;
//免费打开检查一下
//long long给为longlong一下
long long a[200005];
string s[200005];

bool cmp(long long x,long long y){
	return x > y;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and5.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin >> n >> m;
	for(long long i=1;i<=n;i++){
		cin >> a[i];
	}
	sort(a+1,a+n+1,cmp);
	long long mal=0;
	for(long long i=1;i<=n;i++){
		long long daia=a[i];
		while(daia > 0){
			s[i] = char(daia % 2 + '0') + s[i];
			daia/=2;
		}
		mal = max((long long)s[i].size(),mal);
	}
	for(long long i=0;i<=mal-1;i++){
		long long ans=0,outans;
		for(long long j=1;j<=n;j++){
			if(int(s[j].size()) < mal-i){
				break;
			}
			if(s[j][i] == '1'){
				if(ans==0){
					outans = a[j];
				}
				else{
					outans &= a[j];
				}
				ans++;
			}
			if(ans == m){
				cout << outans;
				return 0;
			}
		} 
	}
	cout << 0;
	return 0;
}
