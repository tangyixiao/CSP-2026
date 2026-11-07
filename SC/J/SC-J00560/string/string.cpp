#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long a[N];
char c[N];
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>c[i];
	}
	long long ans=0;
	int r=1,l=n;
	for(int i=1;r<=l;i++){
		if(c[r]!=c[l]){
			if(a[r]==a[l]){
				ans+=a[r];
				r++;
				l--;
			}
			else if(a[r]<a[l]){
				ans+=a[r];
				a[l]-=a[r];
				r++;
			}
			else if(a[r]>a[l]){
				ans+=a[l];
				a[r]-=a[l];
				l--;
			}
		}
		else if(c[r]==c[l]){
			if(a[r]==a[l]){
				r++;
				l--;
			}
			else if(a[r]<a[l]){
				a[l]-=a[r];
				r++;
			}
			else if(a[r]>a[l]){
				a[r]-=a[l];
				l--;
			}
		}
	}
	cout<<ans; 
	return 0;
}