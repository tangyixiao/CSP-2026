#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,s=0,d=0;
	cin>>n>>m;
	int a[n];
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	
	for(long long i=1;i<=n;i++){
		if(m!=2){
			break;
		}
		if(m==2){
			for(long long q=i;q<n;q++){
			    for(long long p=1;p<m;p++){
				d=a[q]&a[q+1];
			}
		}
		if(d>=s){
			s=d;
		}
	}
	}
	sort(a+1,a+n+1);
	int t=0;
	for(int i=1;i<=n;i++){
		t=a[i];
		a[i]=a[n];
		a[n]=t;
		n--;
	}
	if(m==1){
			s=a[1]&a[1];
		}else if(m>2){
			for(int w=1;w<m;w++){
				s=a[w]&a[w+1];
			}
		}
	cout<<s;
	return 0;
} 
