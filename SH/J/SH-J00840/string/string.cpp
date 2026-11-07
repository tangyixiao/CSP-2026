#include<bits/stdc++.h>
using namespace std;
long long n,ls=0,l[1000000];
long long al[1000000];
string a;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	
	for(int i =1 ; i <= n;++i){
		cin >> l[i] >> a[i];
		ls+=l[i];
	}
	int ll=n;
	if (n==1) {
		cout << "0";
		return 0;
	}
	for(int i = 2 ; i <= n ; ++i){
		if(a[i]==a[i-1]){
			
			for(int j = i ; j <= n ; ++j){
				a[j-1]=a[j];
				l[i-1]+=l[i];
				l[i]=0;
			}
			ll-=1;
		}
		
	}
	long long c=0;
	if(ll==1) c=0;
	else if(ll==2) c= min(l[1],l[2]);		

	else {
		
			int lls=0;
			int o=1;
			while(lls < ls){
				lls+=l[o];
				o++;
			}

			if(lls > ls/2) {
				c=l[o]-(lls-ls/2);
			}
			else c=ls/2;
			c=ls/2-c;
	}
	cout << c;
	return 0; 
} 
