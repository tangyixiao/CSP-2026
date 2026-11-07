#include<bits/stdc++.h>
using namespace std;
string a,s;
long long l[50];
long long maxx,sum;
int y;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long x;
	for(int i=1;i<=n;i++){
		cin>>x;
		cin>>s;
		for(long long j=1;j<=x;j++)
			a+=s;
	}
	for(int i=0;i<a.size();i++){
		if(i+1<=a.size()/2||i+1>=a.size()/2)
			l[(int)a[i]-'a'+1]++;
	}
	for(int i=1;i<=26;i++)
		if(l[i]>maxx)
			maxx=l[i],y=i;
	for(int i=1;i<=26;i++)
		if(i!=y)
			sum+=l[i];
	cout<<sum;
	return 0;
}