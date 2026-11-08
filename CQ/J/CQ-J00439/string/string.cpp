#include<bits/stdc++.h>
using namespace std;
//using ll=long long;
#define int long long
int n,a[200005],s;
char b[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>b[i];
	for(int i=1,j=n,x=1,y=a[n];i<j;){
		if((a[i]-x+1)<y){
			if(b[i]!=b[j])s+=a[i]-x+1;
			y-=a[i]-x+1;
			x=1;i++;
		}
		else if((a[i]-x+1)>y){
			if(b[i]!=b[j])s+=y;
			x+=y;
			j--;y=a[j];
		}
		else{
			if(b[i]!=b[j])s+=y;
			j--;y=a[j];
			x=1;i++;
		}
	}
	cout<<s;
	return 0;
}
