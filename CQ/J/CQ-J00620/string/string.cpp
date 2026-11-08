#include<bits/stdc++.h>
using namespace std;
int n;
long long sum,ans;
string s;
struct node{
	int x;
	char c;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].c;
		for(int j=sum;j<=sum+a[i].x;j++) s[j]=a[i].c;
		sum+=a[i].x;
	}
	for(int i=1;i<=sum/2;i++)
		if(s[i]!=s[sum-i+1])
			ans++;
	cout<<ans;
	return 0;
}
