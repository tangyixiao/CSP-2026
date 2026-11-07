#include <iostream>
using namespace std;
typedef long long ll;
const int N=2e5+10;

ll a[N];
char b[N];
int n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>b[i];
	}
	
	int l=1,r=n;
	ll ans=0;
	
	while(l<r){
		
		if(a[l]<a[r]){
			if(b[l]!=b[r]){
				ans+=a[l];
			}
			a[r]-=a[l];
			l++;
		}else if(a[l]>a[r]){
			if(b[l]!=b[r]){
				ans+=a[r];
			}
			a[l]-=a[r];
			r--;
		}else if(a[l]==a[r]){
			if(b[l]!=b[r]){
				ans+=a[l];
			}
			l++;
			r--;
		}
		
		
	}
	
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}