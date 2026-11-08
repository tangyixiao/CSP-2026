
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,biggest=0,smallest=1000000;
	string can,h;
	cin>>n>>m;
	long long a[100001],aput=0,num=0,b[100001];
	for(long long i=0;i<n;i++){
		cin>>a[i];
		num++;
		if(a[i]>biggest)biggest=a[i];
		if(a[i]<smallest)smallest=a[i];
	}
	for(long long i=0;i<num;i++){
		b[i]=a[i];
		for(long long j=1;j<num;j++){
			if(j==i)continue;
			if(a[i]==a[j]){
				if(aput<a[j])aput=a[j];
				break;
			}
		}
		
	}
	
	if(aput!=0)cout<<aput;
	else cout<<biggest-smallest;
	return 0;
}
