#include<bits/stdc++.h>
using namespace std;
long long a[200000];
char c[200000];
int main(){
	freopen(string.in,"r",stdin);
	freopen(string.out,"w",stdout);
	int n;
	cin>>n;
	long long res=0;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=0,j=n-1;i<n,j>=0;){
		if(i==j){
			break;
		}
		if(c[i]!=c[j]){
			res+=min(a[i],a[j]);
		}
		if(a[i]>=a[j]){
			a[i]-=a[j];
			a[j]=0;
		}else{
			a[j]-=a[i];
			a[i]=0;
		}
		if(!a[i]){
			i++;
		}
		if(!a[j]){
			j--;
		}
	}
	cout<<res;
	return 0;
}