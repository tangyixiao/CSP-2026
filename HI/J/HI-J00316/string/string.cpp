#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string a="",b="";
	int p,i,j,shy=0,cpx=0,sum=0;
	cin>>p;
	for(i=1;i<=p;i++)
	{
		int n;
		string s;
		cin>>n>>s;
		for(j=1;j<=n;j++)
		{
			b=b+s;
		}
	}
	a=b;
	reverse(b.begin(),b.end());
	if(a==b)
	{
		cout<<0;
		return 0;
	}
	if(a.length()%2==1)
	{
		string shy=a.substr(0,a.length()/2),cpx=a.substr(a.length()/2+1);
		for(i=0;i<a.length();i++){
			if(shy[i]!=cpx[i])
				sum++;
		}
	}
	else{
		string shy=a.substr(0,a.length()/2),cpx=a.substr(a.length()/2);
		for(i=0;i<a.length();i++){
			if(shy[i]!=cpx[i])
				sum++;
		}
	}
	cout<<sum;
	return 0;
}
