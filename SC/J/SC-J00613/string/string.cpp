#include<bits/stdc++.h>
using namespace std;
struct A{
	long long num;
	string s;
};A a[200000];
long long n,as;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;long long i=0,p=n-1,q=0;
	for(long long j=0;j<n;j++){
		cin>>a[j].num>>a[j].s;	
		i+=a[j].num;
	}
	
	
	while(i>=2){
		
		
		if(a[q].num>a[p].num) {
			if(a[q].s!=a[p].s)
				as+=a[p].num;
				
			i-=2*a[p].num;
			a[q].num-=a[p].num;
			a[p].num=0;
			p--;
		}
		else {
			if(a[q].s!=a[p].s)
				as+=a[q].num;
				
			i-=2*a[q].num;
			a[p].num-=a[q].num;
			a[q].num=0;
			q++;
		}
		
	}
	cout<<as; 
	return 0;
} 