#include<bits/stdc++.h>
using namespace std;
const int N=22222;
long long num,res;
long long a[N],a2[40];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	a2[0]=1;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int ma=a[n-m];
	
	for(int j=1;j<=30;j++){
		a2[j]=a2[j-1]*2;
	}
	for(int i=0;i<=29;i++){
		if(ma > a2[i] && ma <= a2[i+1]){
			res=a2[i+1]-1;
		}
	}
	cout<<res;
	return 0;
} 
