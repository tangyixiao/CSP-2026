#include<bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0);
	freopen("string1.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	string s="";
	int a[200001]={0};
	char c[200001];
	for(int i=0;i<n;i++)cin>>a[i]>>c[i];
	long long p=0,q=n-1,p1=0,q1=0,ans=0;
	while(p<q){
		if(c[p]!=c[q]){
			ans+=abs(min((a[p]-p1),(a[q]-q1)));
		}
		if(a[p]-p1>a[q]-q1){
			p1+=a[q]-q1;
			q--;
			q1=0;
		}else if(a[p]-p1<a[q]-q1){
			q1+=a[p]-p1;
			p++;
			p1=0;
		}else{
			q--;
			p++;
			q1=0;
			p1=0;
		}
	}
	cout<<ans;
	return 0;
} 
