#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int sum=0;
	string s;
	for(int i=1;i<=n;i++){
		int x;cin>>x;
		char c;cin>>c;
	for(int j=1;j<=x;j++){
		sum++;
		s+=c;
		}	
	}
	int ans=0;
	int l=0;
	int r=s.length()-1;
	while(l<r)
	{
		if(s[l]=s[r])
		{
			ans++;
		}
		l++;r--;
	}
	cout<<ans;
	return 0;
}
