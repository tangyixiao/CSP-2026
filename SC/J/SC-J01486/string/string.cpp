#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int N=2e5+10;
LL n,a[N],cnt;
char s[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","W",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) {	
		cin>>a[i]>>s[i-1];
	}
	LL l=1,r=n;
	while(l<=r){			
		if(a[l]<a[r] && s[l-1]!=s[r-1]){			
			l++;
			if(l==r){
				cnt+=a[l-1];
				break;
			}
			a[l]+=a[l-1];
		}		
		if(s[l-1]!=s[r-1]){
			cnt+=min(a[l],a[r]);			
		}	
		a[l]-=a[r];
		a[r]=0;				
		if(!a[r]){
			r--;
		}
		if(!a[l]){
			l++;
		}	
	}
	cout<<cnt;
	return 0;	
}