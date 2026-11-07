#include<bits/stdc++.h>
using namespace std;
int a[200010];
long long ans=0;
string s,b;
bool huiwen(int n){
	int l=0,r=n;
	while(l<r){
		if(s[l]!=s[r]){
			//cout<<s[l]<<s[r];
			if(a[l]>a[r]){
				ans+=a[r];
				a[l]-=a[r];
				r--;
			}
			else{
				if(a[l]==a[r]){
					ans+=a[l];
					l++;r--;
				}
				else{
					ans+=a[l];
					a[r]-=a[l];
					l++;
				}
			}
		}
		else{
			if(a[l]>a[r]){
				a[l]-=a[r];
				r--;
			}
			else{
				if(a[l]==a[r]){
					l++;r--;
				}
				else{
					a[r]-=a[l];
					l++;
				}
			}
		}
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cin>>b;
		s+=b;
	}
	huiwen(n);
	cout<<ans;
}
