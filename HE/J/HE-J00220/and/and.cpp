#include<bits/stdc++.h>
using namespace std;
long long a[1000000];
bool pd(int x){
	int o=x;
	while(o){
		if(o%2!=1){
			return 0;
		}
		o/=2;
	}
	return 1;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,cont=0;long long ss=0;cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=n-1;i>=0;i--){
		if(pd(a[i])){
			ss=a[i];
			cont=i;
			break;
		}
	}
	for(int i=n-1;i>=0;i--){
		if(i==cont){
			continue;
		}
		else{
			if(a[i]>=ss){
				cout<<ss;
				return 0;
			}
			else{
				cout<<a[i];
				return 0;
			}
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
