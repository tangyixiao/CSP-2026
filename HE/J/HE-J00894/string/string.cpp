#include <bits/stdc++.h>
using namespace std;

int n;
string s;
long long len=0;
long long sum=0;

int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	int a;
    	char c;
    	cin>>a>>c;
    	len+=a;
    	
    	for(int j=0;j<a;j++) s+=c;
	}
	
    if(n==1) 
	{
		cout<<"0";
		return 0;
    }
    else
    {
    	for(int i=len/2-1;i>=0;i--)
    	{
    		if(s[i]!=s[len-i-1]) sum++;
		}
		cout<<sum;
	}
	
return 0;}
