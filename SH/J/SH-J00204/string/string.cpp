#include<bits/stdc++.h>
using namespace std;
const int N = 200005;
int n,i;
int a[N];
char c[N];
long long ans = 0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(i = 0;i<n;i++){
		cin>>a[i]>>c[i];
		ans+=a[i];
	}
	i = 0;
	int tmp;
	ans /= 2;
	cout<<ans;
	long long cnt = 0;
	int j = n-1;
	while(ans >= a[i]){
		tmp = a[i];
		while(tmp>=a[j]){
			if(c[j] != c[i])cnt += a[j];
			tmp -= a[j];
			j--;
		}
		if(tmp > 0){
			if(c[j]!= c[i])cnt += a[j];
			a[j]-=tmp;
		}
		ans -= a[i];
		i++;
	}
	if(ans > 0){
		tmp=ans;
		while(tmp>=a[j]){
			if(c[j] != c[i]) cnt += a[j];
			tmp -= a[j];
			j--;
		}
	}
	cout<<cnt;
	return 0;
}

