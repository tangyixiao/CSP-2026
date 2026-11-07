#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200009;
int n;
ll a[N],ans; 
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.in","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>c[i];
		ans+=a[i];
	}
	int q=ans;
	ans=(ans+1)/2;
	int l=1;
	int r=n;
	while(l<r){
		if(c[l]!=c[r]){
			if(a[l]<a[r]){
				a[r]-=a[l];
				l++;
				continue;
			}
			else if(a[l]>a[r]){
				a[l]-=a[r];
				r--;
				continue;
			}
			else{
				l++;
				r--;
				continue;
			}
		}
		else if(a[l]<a[r]) ans-=a[l],a[r]-=a[l],l++;
		else if(a[l]>a[r]) ans-=a[r],a[l]-=a[r],r--;
		else if(a[l]==a[r]) ans-=a[l],l++,r--;
	}
	if(l==r&&q%2==1) ans-=a[l];
	cout<<ans<<endl;
	return 0;
}
