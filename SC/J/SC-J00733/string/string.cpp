#include<iostream>
#define ll long long
using namespace std;
const int N=2e5+5;
ll a[N],ans;
int n;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int l=1,r=n;
	ll sl=a[1],sr=a[n];
	while(l<r){
		if(c[l]!=c[r]){
			ans+=min(sl,sr);
			if(sl<sr){
				l++;
				sr-=sl;
				sl=a[l];
			} 
			else if(sl>sr){
				r--;
				sl-=sr;
				sr=a[r];
			} 
			else if(sl==sr){
				l++;
				r--;
				sl=a[l];
				sr=a[r];
			} 
		}else{
			if(sl<sr){
				l++;
				sr-=sl;
				sl=a[l];
			} 
			else if(sl>sr){
				r--;
				sl-=sr;
				sr=a[r];
			} 
			else if(sl==sr){
				l++;
				r--;
				sl=a[l];
				sr=a[r];
			} 
		}
	}
	cout<<ans;
	return 0;
}