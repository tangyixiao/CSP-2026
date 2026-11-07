#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std; 
long long max2(long long x){
	long long y=1;
	while(y<=x){
		y*=2;
	}
	return y/2;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;//O(n^2)
	cin >> n >> m;
	long long a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	reverse(a,a+n);
	long long wei= max2(a[0]);
	while(wei>0){
	    int x=0;
		for(int i = 0; i < n; i++){  
			if((a[i]&wei)!=0){
				x++;
			}
		}
		if(x>m){
			for(int i = 0; i < n; i++){
				if((a[i]&wei)==0){
					a[i]=0;
				}
			}
		}else if(x==m){
			for(int i = 0; i < n; i++){
				if((a[i]&wei)==0){
					a[i]=0;
				}
			}
			break;
		}
		wei/=2;
	}
	long long num=-1;
	for(int i = 0; i < n; i++){
		if(a[i]==0)continue;
		if(num==-1)num=a[i];
		num=num&a[i];
	}
	cout << num;
	return 0;
}
