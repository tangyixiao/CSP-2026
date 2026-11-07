#include <bits/stdc++.h>
using namespace std;

long long a[200005];
long long ans,m;
char c[200005];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i]>>c[i];
	}
	for(int i=0; i<n/2; ){
		for(int j=n-1; j>=n/2; ){
			m = 0;
			//cout<<c[i]<<" "<<c[j]<<"\n";
			if(c[i] == c[j]){
				//cout<<a[i]<<" "<<a[j]<<" \n";
				m = min(a[i] , a[j]);
				//cout<<m<<"\n";
				if(i == j){
					a[i] = a[i] - m;
				}else{
					a[i] = a[i] - m;
					a[j] = a[j] - m;
				}
				//cout<<a[i]<<" "<<a[j]<<" \n";
			}
			if(c[i] != c[j]){
				m = min(a[i] , a[j]);
				//cout<<m<<"\n";
				ans += m;
				a[i] -= m;
				a[j] -= m;
			}
			if(a[i] == 0){
				i++;
			}
			if(a[j] == 0){
				j--;
			}
		}
	}
	cout<<ans;
} 

/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
