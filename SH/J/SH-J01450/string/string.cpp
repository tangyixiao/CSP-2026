#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
long long ans;
int n,a[maxn];
char c[maxn];
int main(){
	//freopen
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>c[i];
	for(int i=1,j=n;i<j;){
		char t1=c[i],t2=c[j];
		if(t1==t2){
			if(a[i]<a[j]){
				a[j]-=a[i];
				i++; 
			}
			else if(a[i]>a[j]){
				a[i]-=a[j];
				j--;
			}
			else{
				a[i]=a[j]=0;
				i++,j--;
			}
		}
		else{
			ans+=min(a[i],a[j]);
			if(a[i]<a[j]){
				a[j]-=a[i];
				i++; 
			}
			else if(a[i]>a[j]){
				a[i]-=a[j];
				j--;
			}
			else{
				a[i]=a[j]=0;
				i++,j--;
			}
		}
	}
	cout<<ans; 
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b

*/
