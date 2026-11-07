#include<bits/stdc++.h>
using namespace std;
long long c[200000],s[200000];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","r",stdout);
	int a,b;
	cin>>a>>b;
	for(int i=0;i<a;i++){
		cin>>c[i];
	}
	sort(c,c+a);
	long long sum=c[a-1];
	for(int i=a-2;i>=a-b;i--){
		cout<<c[i]<<endl;
		sum=sum&c[i];
	}
	cout<<sum;
} 
