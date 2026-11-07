#include<bits/stdc++.h>
using namespace std;
long long  n,a[200009];
char c[200009];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	long long cnt=0;
	int i=0,j=n-1;
	while(i<=j){
		long long minn=min(a[i],a[j]);
		if(c[i]!=c[j]){
			cnt+=minn;
		}	
		if(a[i]>=a[j]){
			a[i]-=a[j];
			j-=1;
			
		}
		else{
			a[j]-=a[i];
			i++;
		}
	}
	cout<<cnt;
	return 0;
}

