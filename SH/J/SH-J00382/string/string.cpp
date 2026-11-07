#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	string s="";
	int a[n+1];
	char c[n+1];
	long long sum=0;
	for(int i=1;i<=n;i++)cin>>a[i]>>c[i];
	int l=1,r=n;
	while(l<r){
		if(c[l]==c[r]){
			if(a[l]<a[r])a[r]-=a[l],l++;
			else if(a[l]>a[r])a[l]-=a[r],r--;
			else l++,r--;
		}else{
			if(a[l]<a[r])sum+=a[l],a[r]-=a[l],l++;
			else if(a[l]>a[r])sum+=a[r],a[l]-=a[r],r--;
			else sum+=a[l],l++,r--;
		}
	}
	cout<<sum;
	return 0;
}
