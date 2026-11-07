#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	int n;
	cin>>n;
	vector<pair<int,char> >a(n);
	for(int i=0;i<n;i++)cin>>a[i].first>>a[i].second;
	long long ans=0;
	int num;
	for(int i=0,j=n-1;i<j;){
		num=min(a[i].first,a[j].first);
		if(a[i].second!=a[j].second)ans+=num;
		a[i].first-=num;
		a[j].first-=num;
		if(a[i].first==0)i++;
		if(a[j].first==0)j--;
	}
	cout<<ans;
	return 0;
}