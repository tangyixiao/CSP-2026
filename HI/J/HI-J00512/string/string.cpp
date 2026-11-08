#include<bits/stdc++.h>
using namespace std;
struct hw{
	long long sz;
	char zf;
}a[1000000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,cnt=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].sz>>a[i].zf;
		cnt+=a[i].sz;
	}
	long long pd=0,j=0;
	for(long long i=cnt/2-1;i>=0;i--){
		if(a[i].zf!=a[0+j].zf){
			pd=1;
		}
		j+=1;
	}
	if(pd==0){
		cout<<0;
	}else{
		long long sum=0;
		j=0;
		for(long long i=cnt/2-1;i>=0;i--){
			if(a[i].zf!=a[0+j].zf){
				sum++;
			}
			j+=1;
		}
		cout<<sum;
	}
	return 0;
} 
