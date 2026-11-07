#include<bits/stdc++.h>
#define LL long long
#define ULL unsigned long long
#define re register
#define ss stable_sort

using namespace std;

const ULL N = 2e5+5;
const LL inf = (LL)0x3f3f3f3f3f3f3f3f;

int n,m;
int a[N];
LL ans=-inf;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);

	cin>>n>>m;
	for(re int i=1;i<=n;i++){
		cin>>a[i];
	}

	LL u=1<<n;
	for(re LL i=1;i<u;i++){
		if(__builtin_popcount(i)==m){
			string s;
			LL k=i;
			while(k){
				s+=k%2+'0';
				k/=2;
			}
			LL sum;
			while(s.size()<n){
				s+='0';
			}
   			for(re LL j=s.size()-1;j>=0;j--){
				if(s[j]=='1'){
					sum=a[j+1];
					break;
				}
			}
			for(re LL j=s.size()-1;j>=0;j--){
				if(s[j]=='1'){
					sum&=a[j+1];
				}
			}
			ans=max(ans,sum);
		}
	}
	cout<<ans;
	return 0;
}