#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    long long n,x[200005],sum=0;
    char w[200005];
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>x[i]>>w[i];
		sum+=x[i];  	
	}
	long long mid=(sum+1)/2;
	if(w[1]==w[n])
	{
		cout<<"0";
		return 0;
	}
	if(sum%2==0)
	{
		cout<<mid;
	}
	else{
		cout<<mid-1;
	}
	return 0;
 } 
