#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	int a[n+9];
	char c[n+9];
	for(int i=1;i<=n;i++){
		cin >> a[i] >> c[i];
	}
	long long cnt=0;
	int i=1,j=n;
	while (i<j){
		if(c[i]==c[j]){
			if(a[i]==a[j]){
				i++,j--;
				continue;
			}
			if(a[i]<a[j]){
				a[j]-=a[i];
				i++;
				continue;
			}
			if(a[j]<a[i]){
				a[i]-=a[j];
				j--;
				continue;
			}
		}
		if(c[i]!=c[j]){
			if(a[i]==a[j]){
				cnt+=a[i];
				i++,j--;
				continue;
			}
			if(a[i]<a[j]){
				cnt+=a[i];
				a[j]-=a[i];
				i++;
				continue;
			}
			if(a[j]<a[i]){
				cnt+=a[j];
				a[i]-=a[j];
				j--;
				continue;
			}
		}
	}
	cout << cnt;
	return 0;
}