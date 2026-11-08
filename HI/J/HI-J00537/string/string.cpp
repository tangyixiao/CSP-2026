#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	int t;
	ll ans = 0;
	cin>>t;
	vector<ll>a(t,0);
	vector<char>b(t,'0');
	for(int i = 0;i<t;i++){
		cin>>a[i]>>b[i];
	}
	int l = 0,r = t-1;
	while(l<r){
		if(b[l]!=b[r]){
			if(a[l]>a[r]){
				ans+=a[r];
				ll k = a[l]-a[r];
				while(l<r){
					if(k>a[r-1]){
						k-=a[r-1];
						if(b[l]!=b[r-1])ans+=a[r-1];
						r--;
					}else if(k == a[r-1]){
						k-=a[r-1];
						if(b[r]!=b[r-1])ans+=a[r-1];
						r--;
						break;
					}else{
						a[r-1]-=k;
						if(b[l]!=b[r-1])ans+=k;
						r--;
						break;
					}
				}
				l++;
			}
			else if(a[l]<a[r]){
				ans+=a[l];
				ll k = a[r]-a[l];
				while(l<r){
					if(k>a[l+1]){
						k-=a[l+1];
						if(b[r]!=b[l+1])ans+=a[l+1];
						l++;
					}else if(k == a[l+1]){
						k-=a[l+1];
						if(b[r]!=b[l+1])ans+=a[l+1];
						l++;
						break;
					}else{
						a[l+1]-=k;
						if(b[r]!=b[l+1])ans+=k;
						l++;
						break;
					}
				}
				r--;
			}
			else if(a[l] == a[r]){
				ans+=a[l];
				l++;
				r--;
			}
		}else if(a[l]>a[r]){
			ll k = a[l]-a[r];
			while(l<r){
				if(k>a[r-1]){
					k-=a[r-1];
					if(b[l]!=b[r-1])ans+=a[r-1];
					r--;
				}else if(k == a[r-1]){
					k-=a[r-1];
					if(b[r]!=b[r-1])ans+=a[r-1];
					r--;
					break;
				}else{
					a[r-1]-=k;
					if(b[l]!=b[r-1])ans+=k;
					r--;
					break;
				}
			}
			l++;
		}
		else if(a[l]<a[r]){
			ll k = a[r]-a[l];
			while(l<r){
				if(k>a[l+1]){
					k-=a[l+1];
					if(b[r]!=b[l+1])ans+=a[l+1];
					l++;
				}else if(k == a[l+1]){
					k-=a[l+1];
					if(b[r]!=b[l+1])ans+=a[l+1];
					l++;
					break;
				}else{
					a[l+1]-=k;
					if(b[r]!=b[l+1])ans+=k;
					l++;
					break;
				}
			}
			r--;
		}
		else{
			l++;
			r--;
		}
	}
	cout<<ans;
	return 0;
}
