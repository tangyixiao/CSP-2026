#include <bits/stdc++.h>
using namespace std;
long long n,m,sum=0,cnt=0,f=1;
string s="",a,c="";
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m>>a;
		cnt+=m;
		for(int j=1;j<=m;j++){
			if(f) c=a+c;
			s=s+a;
			if(f==1&&s!=c){
				f=0;
			}
		}
	}
	if(f){
		cout<<"0";
		return 0;
	}
	long long l=0,r=cnt-1;
	while(l<r){
		if(s[l]!=s[r]){
			s[r]=s[l];
			sum++;
			
		}
		l=l+1;
		r=r-1;
	}
	cout<<sum;
	return 0;
}