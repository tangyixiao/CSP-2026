#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+10;
int n;
ll a[N],ans;
char ch[N];
int l,r;
bool f;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>ch[i];
		if(ch[i]!=ch[i-1]) f=1;
	}
	if(!f){
		cout<<0;
		return 0;
	}
	l=1,r=n;
	while(l<r){
		if(ch[l]==ch[r]&&a[l]==a[r]) l++,r--;
		else{
			if(ch[l]==ch[r]){
				if(a[l]>a[r]){
					a[l]-=a[r];
					r--;
				}
				else{
					a[r]-=a[l];
					l++;
				}
			}
			else{
				if(a[l]==a[r]){
					ans+=a[l];
					l++,r--;
				}
				else if(a[l]>a[r]){
					ans+=a[r];
					a[l]=a[l]-a[r];
					r--;
				}
				else{
					ans+=a[l];
					a[r]-=a[l];
					l++;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}