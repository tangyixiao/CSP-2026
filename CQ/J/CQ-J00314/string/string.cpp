#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],m,ans;
char b[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(long long i=0;i<n;i++){
		cin >> a[i] >> b[i];
		m+=a[i];
	}
	int s=a[0],x=0,g=0;
	for(long long i=0;;){
		for(long long j=n-1;;){
			if(i==j||i>j){
				g=1;
				break;
			}
			if(b[i]==b[j]){
				if(a[i]>a[j]){
					a[i]-=a[j];
					j--;
				}else{
					a[j]-=a[i];
					i++;
					if(a[j]==0) j--;
				}
			}else{
				if(a[i]>a[j]){
					a[i]-=a[j];
					ans+=a[j];
					j--;
				}else{
					a[j]-=a[i];
					ans+=a[i];
					i++;
					if(a[j]==0) j--;
				}
			}
		}
		if(g==1) break;
	}
	cout << ans;
	return 0;
}

