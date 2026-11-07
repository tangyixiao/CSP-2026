#include <bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N];
char c[N];
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	if(n==1){
		cout << 0;
		return 0;
	}
	for(int i=1;i<=n;i++) cin >> a[i] >> c[i];
	int i=1,j=n;
	while(i<j){
		if(c[i]!=c[j]){
			if(a[i]==a[j]){
				ans+=a[i];
				i++;
				j--;
			}
			else{
				ans+=min(a[i],a[j]);
				if(a[i]<a[j]){
					a[j]-=a[i];
					i++;
				}
				else{			
					a[i]-=a[j];
					j--;
				}
		}
	}
		else{
			if(a[i]!=a[n-i]){
				if(a[i]<a[j]){
					a[j]-=a[i];
					i++;
				}
				else{
					a[i]-=a[j];
					j--;
				}
			}
			else{
				i++;
				j--;
			}
		}
	} 

	cout << ans;
	return 0;
} 
