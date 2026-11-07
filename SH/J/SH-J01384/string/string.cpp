#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
ll a[200005];
char c[200005];
ll sum = 0;
ll d[200005];
ll f[200005];
ll mid;
ll midnum;
ll ans;
int cnt = 0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		scanf("%lld %c",&a[i],&c[i]);
		sum += a[i];
		d[i] = d[i-1]+a[i];
	}
//	for(int i = 1;i <= n;i++){
//		cout << a[i] << ' ' << c[i] << endl;
//	}
	for(int i = n;i >= 1;i--){
		f[i] = f[i+1]+a[i];
	}
	for(int i = 1;i <= n;i++){
		midnum += a[i];
		if(midnum > sum/2){
			mid = i-1;
			midnum -= a[i];
			break;
		}
	}
	int i = 1,j = n;
	if(midnum == sum/2 && sum % 2 == 0){
		while(i <= mid && j > mid){
			if(c[i] != c[j]){
				ans += min(d[i],f[j])-max(d[i-1],f[j+1]);
			}
			if(d[i] == f[j]){
				i++;
				j--;
			}
			if(d[i] > f[j]){
				j--;
			}
			
			if(d[i] < f[j])
				i++;
		}
	}
	else{
		mid++;
		if(d[mid] < f[mid+2]){
			while(i <= mid && j > mid){
				if(c[i] != c[j]){
					ans += min(d[i],f[j])-max(d[i-1],f[j+1]);
				}
				if(d[i] == f[j]){
					i++;
					j--;
				}
				if(d[i] > f[j])
					j--;
				if(d[i] < f[j])
					i++;
			}
		}
		else{
			while(i < mid && j >= mid){
			//	cout << i << ' ' <<j << endl;
				if(c[i] != c[j]){
					ans += min(d[i],f[j])-max(d[i-1],f[j+1]);
				//	cout << i << ' ' << j << ' ' << min(d[i],f[j]) << ' ' << max(d[i-1],f[j+1]) << ' ' << ans << endl;
				}
				if(d[i] == f[j]){
					i++;
					j--;
				}
				if(d[i] > f[j]){
					j--;
				//	cout << i << ' ' <<j << endl; 
				}
				else if(d[i] < f[j]){
				//	cout << i << ' ' <<j << endl;
					i++;
				}
			}
		}
	}
	cout << ans;
	return 0;
}
