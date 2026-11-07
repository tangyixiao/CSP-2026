#include<bits/stdc++.h>
using namespace std;
long long ans,j=1,l;
int n;
int a[200009];
char c[200009];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>c[i];
		l+=a[i];
	}
	do{
		if(c[j]!=c[n])
		ans+=min(a[j],a[n]);
		l-=2*min(a[j],a[n]);
		if(a[j]<a[n]){
			a[n]-=a[j];
			j++;
		}
		else if(a[j]>a[n]){
			a[j]-=a[n];
			n--;
		}
		else if(a[j]==a[n]){
			j--;n--;
		}
	}while (l>0);
	cout<<ans;
	return 0;
} 
