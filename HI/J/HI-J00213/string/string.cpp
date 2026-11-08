#include<bits/stdc++.h>
using namespace std;
long long n;
long long a;
string nm,c;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++)
		{
			nm=nm+c;
		}
	}
	long long len=nm.size();
	string sum;
	for(int i=len-1;i>=0;i--){
		sum=sum+nm[i];
	}
	if(sum==nm)
	{ 
		cout<<0;
	} 
	else{
		long long cnt=0;
		for(int i=0;i<=sqrt(len);i++)
		{
			if(nm[i]!=nm[len-i])
			{
				nm[len-i]==nm[i];
				cnt++;
			}
			sum="";
			for(int j=len-1;j>=0;j--){
				sum=sum+nm[j];
			}
			if(sum==nm){
				cout<<cnt;
				break;
			}
		}
		cout<<cnt-1;
	}
	return 0;
}
