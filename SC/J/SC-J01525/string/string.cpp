#include<bits/stdc++.h>
using namespace std;
bool f(string t)
{
	for(long long i=0;i<t.size();i++){
		if(t[i]!=t[t.size()-i-1]){
			return 0;
		}
	}
	return 1;
}
long long cnt=0;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	if(n==1){
		cout<<"0";
		return 0;
	}
	string s;
	long long sum=0;
	for(int i=1;i<=n;i++)
	{
		long long a;
		char b;
		cin>>a>>b;
		for(int j=sum;j<=sum+a-1;j++){
			s[j]=b;
		}
		sum+=a;
	}
		
	cnt=int(sum/2)*1.0;
	for(long long i=0;i<s.size();i++){	
		if(s[i]==s[s.size()-i-1]){
				cnt--;
		}
	}
	cout<<cnt;
	return 0;
}