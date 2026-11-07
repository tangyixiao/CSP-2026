#include <bits/stdc++.h>
using namespace std;
long long cmp(long long a,long long b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	
	long long num[n]={0};
	for(long long i=0;i<n;i++){
		cin>>num[i];
	}
	long long s=num[0];
	int y[n];
	sort(num,num+n,cmp);
	for(long long t=0;t<n;t++){
		s=num[t];
		for(long long i=0;i<m;i++){
			s=(s&num[i]);
		}
		y[t]=s;
		
	}
	sort(y,y+n,cmp);
	cout<<y[0];
	return 0;
}
