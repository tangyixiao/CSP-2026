#include<bits/stdc++.h>
using namespace std;
struct o{
	long long a;
	char c;
}k[200005];
long long n;
unsigned long long sum;
unsigned long long picking_(){
	unsigned long long ans=0; 
	unsigned long long p=0;//》》》 
	unsigned long long q=0;//《《《
	unsigned long long lastp=0;//
	long long i=0;
	long long j=0;
	while(p+q<sum-1&&i+j<n){//i,j<n
		if(p<q){
			i++;
			p+=k[i].a;
		}
		else if(p>q){
			j++;
			q+=k[n-j+1].a;
		}
		else{
			i++;
			j++;
			q+=k[n-j+1].a;
			p+=k[i].a;
		}
		if(k[i].c==k[n-j+1].c){
			lastp=min(p,q);
		}
		else if(k[i].c!=k[n-j+1].c){
			ans+=min(p,q)-lastp;
			lastp=min(p,q);
		}
	}
	if(p<q){
		if(k[i].c!=k[n-j+1].c){
			ans+=min(p,q)-lastp;
		}
	}
	else if(p>q){
		if(k[i].c!=k[n-j+1].c){
			ans+=min(p,q)-lastp;
		}
	}
	else{
		if(k[i].c!=k[n-j+1].c){
			ans+=min(p,q)-lastp;
		}
	}
	return ans;
} 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(unsigned long long i=1;i<=n;i++){
		cin>>k[i].a;
		cin>>k[i].c;
		sum+=k[i].a;
	}
	unsigned long long fk=picking_();
	cout<<fk;
	return 0;
}