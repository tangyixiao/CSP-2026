#include<bits/stdc++.h>
using namespace std;
char b[50000000];char a[1000000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long  n;long long  sum=0;
	cin>>n;long long  m;char w;
	for(long long i=0;i<n;i++){
		cin>>m>>w;
		for(long long j=sum;j<sum+m;j++){
			a[j]=w;
		}
		sum+=m;
	}	
	long long num=0;
	if(sum%2==0){
		for(long long i=sum-1;i>=sum/2;i--){
			b[num]=a[i];
			num++;
		}
	}else{
		for(long long i=sum-1;i>=sum/2+1;i--){
			b[num]=a[i];
			num++;
		}
	}
	long long num2=0;
	for(long long i=0;i<num;i++){
		if(a[i]!=b[i]){
			num2++;
		}
	}cout<<num2;
} 
