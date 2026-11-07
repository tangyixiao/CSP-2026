#include<bits/stdc++.h>
using namespace std;
long long n,t,a[200010],ans;
string s,b=" ";
int main(){
	freopen("string.in.txt","r",stdin);
	freopen("string.out.txt","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>t;
	for(long long i=1;i<=t;i++){
		cin>>n;
		cin>>s;
		b+=s;
		a[i]=n;

	}
	long long l=1,r=t;
	while(1){
		if(l>=r){
			break;
		}
		if(b[l]==b[r]){
			if(a[l]>a[r]){
				a[l]-=a[r];
				r--;
			}else if(a[l]<a[r]){
				a[r]-=a[l];
				l++;
			}else {
				l++;
				r--;
			}
		}else {
			if(a[l]>a[r]){
				a[l]-=a[r];
				ans+=a[r];
				r--;				
			}else if(a[l]<a[r]){
				a[r]-=a[l];
				ans+=a[l];
				l++;
			}else {
				ans+=a[l]; 
				l++;
				r--;
			}
		}
	}
	cout<<ans;
	return 0;
} 
