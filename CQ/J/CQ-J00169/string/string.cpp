#include<bits/stdc++.h>
using namespace std;
int n,a[200005];
char c[200005];
long long cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=1,j=n;i<j;){
		if(a[i]==a[j]){
			if(c[i]!=c[j]) cnt+=a[i];
			i++;
			j--;
		}
		else if(a[i]<a[j]){
			if(c[i]!=c[j]) cnt+=a[i];
			a[j]-=a[i];
			i++;
		}
		else{
			if(c[i]!=c[j]) cnt+=a[j];
			a[i]-=a[j];
			j--;
		}
	}
	cout<<cnt;
	return 0;
}

