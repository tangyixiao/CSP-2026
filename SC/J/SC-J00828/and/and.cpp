#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200101],mx=0,mi=10000000,b[200101];
int main(){
	freopen(and.in,"r",stdin);
	freopen(and.out,"w",stdout);
	long long s=0,s2=0;
	int i,j;
	cin >> n >> m;
	for(i=0;i<n;i++){
		cin >> a[i];
		mx=max(mx,a[i]);
		mi=min(mi,a[i]);
		
	}
	if(m==n-1){
		for(i=0;i<n;i++){
			if(i==0 && a[i]!=mi){
			 	s2=a[i];
			 	i++;
			 }else{
			 	s2=a[i+1];
			 	s++;
			 	i=i+2;
			 }
			 if(s==0 && a[i]==mi){
			 	s++;
			 	continue;
			 }
			 s2=s2&a[i];
		}
		cout << s2;
	}else if(m==1){
		cout << mx;
	}else if(m==n){
		s=a[0];
		for(i=1;i<n;i++){
			s=s&a[i];
		}
		cout << s;
	}else{
		mx=0;
		int o;
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				mx=max(mx,a[i]&a[j]);
			}
		}
		cout << mx;
	}
	return 0;
} 