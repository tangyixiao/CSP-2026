#include<bits/stdc++.h>
using namespace std;
long long n,ans=0;
long long l1[200500],l=1,r,qs,hs;
char c[200500];
long long L=0;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	cin >> n;
	r=n;
	for(int i=1;i<=n;i++){
		cin >> l1[i] >> c[i];
		L+=l1[i];
	}
	while(l<r&&qs<L/2){
		if(c[l]==c[r]){
			if(l1[l]>l1[r]){
				l1[l]-=l1[r];
				r--;
			}
			else if(l1[l]<l1[r]){
				l1[r]-=l1[l];
				l++;
			}
			else r--,l++;
		}
		else{
			if(l1[l]>l1[r]){
				ans+=l1[r];
				l1[l]-=l1[r];
				r--;
			}
			else if(l1[l]<l1[r]){
				ans+=l1[l];
				l1[r]-=l1[l];
				l++;
			}
			else {
				ans+=l1[l];
				r--,l++;
			}
		}
	}
	cout << ans;
    return 0;
}
