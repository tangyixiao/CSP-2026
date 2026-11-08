#include<bits/stdc++.h>
using namespace std;
const long long N=1e6;
long long n;
long long cnt[N];
char a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n;
	for(long long i=1;i<=n;i++){ 
		cin>>cnt[i]>>a[i];
	}
	long long i=1,j=n;
	long long ans=0;
	while(i<j){
		if(cnt[i]<cnt[j]){
			ans+= (a[i] == a[j] ? 0 : cnt[i]);
			cnt[j]-=cnt[i];
			i++;
		}else if(cnt[i]==cnt[j]){
			ans+= (a[i] == a[j] ? 0 : cnt[i]);
			i++;
			j--;
		}else{
			ans+= (a[i] == a[j] ? 0 : cnt[j]);
			cnt[i]-=cnt[j];
			j--;
		}
	}
	cout<<ans;
	return 0;
} 
