#include<bits/stdc++.h>
using namespace std;
int n;
int times[200005];
char c[200005];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	long long len=0;
	for(int i=1;i<=n;i++){
		cin >> times[i] >> c[i];
		len += times[i];
	}
	long long ans = 0,i=1,j=n;
	while(len>1){
		long long l1 = times[i],l2 = times[j];
		long long min_l = min(l1,l2);
		if(c[i] != c[j])	ans+=min_l;
		if(l1>l2){
			times[i]-=min_l;
			j--;
		}
		else if(l1<l2){
			times[j]-=min_l;
			i++;
		}
		else{
			i++,j--;
		}
		len-=2*min_l;
	}
	cout << ans;
	return 0;
} 
