#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=200005;
string s;
int n,a[N];
ll k,ans;
char c[N];

int main(){
	freopen("string.in.txt","r",stdin);
	freopen("string.txt","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		k+=a[i];
		//cout<<a[i]<<c[i]<<endl;
		for(int j=0;j<a[i];j++){
			s+=c[i];
		}
	}
	for(int i=1;i<=k/2;i++){
		if(s[i]!=s[k+1-i]) ans++;
		
	}
	cout<<ans;
	//cout<<k<<endl;
	/*ll l=0,r=k+1,x=0;
	for(int i=1,j=n;i<j;i++){
		if(l>=r) break;
		l+=a[i];
		while(l+r>k+1&&i<=j){
			//if(x==0) j--;
			r-=a[j];
			cout<<i<<" "<<j<<" "<<l<<" "<<r<<" "<<x<<" "<<ans<<endl;
			if(i>=j){
				ans+=(l-r+1)/2;
				break; 
			} 
			if(c[i]==c[j]) ans+=min(a[i],a[j]);
			if(l+r<=k+1){
				x=k-l-r+1;
				a[j]=x;
				r+=x;
				break;
			}
			j--;
		}
	}
	cout<<((k+1)/2-ans);*/
	return 0;
} 
