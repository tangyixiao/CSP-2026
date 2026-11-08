#include<bits/stdc++.h>
using namespace std;
long long n,l,r,ans;
pair<int,char> a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i].first>>a[i].second;
	l=1,r=n;
	while(l<=r){
		if(a[l].second!=a[r].second){
			if(a[l].first<=a[r].first){
				ans=ans+1ll*a[l].first;
				a[r].first-=a[l].first;
				l++;
			} 
			else{
				ans=ans+1ll*a[r].first;
				a[l].first-=a[r].first;
				r--;
			}
			if(a[r].first==0)r--;
		}
		else{
			if(a[l].first<=a[r].first){
				a[r].first-=a[l].first;
				l++;
			} 
			else{
				a[l].first-=a[r].first;
				r--;
			}
			if(a[r].first==0)r--;
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

