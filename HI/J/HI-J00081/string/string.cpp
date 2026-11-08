#include<bits/stdc++.h>
using namespace std;
long long n,l,r,cnt=0;
struct Node
{
	long long first;
	char second;
};
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	vector<Node> a(n);
	
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].first>>a[i].second;
	}
	if(n==1)
	{
		cout<<"0";
		return 0;
	}
	l=1;
	r=n;
	while(l<=r)
	{
		if(a[l].second!=a[r].second)
		{
			if(a[r].first<a[l].first){
				cnt+=a[r].first;
				a[l].first-=a[r].first;
				r--;
			}
			else if(a[l].first<a[r].first){
				cnt+=a[l].first;
				a[r].first-=a[l].first;
				l++;
			}
			else{
				cnt+=a[l].first;
				l++;
				r--;
			}
		}
		else{
			if(a[r].first<a[l].first){
				a[l].first-=a[r].first;
				r--;
			}
			else if(a[l].first<a[r].first){
				a[r].first-=a[l].first;
				l++;
			}
			else{
				l++;
				r--;
			}
		}
	}
	cout<<cnt;
	
	return 0;
}
