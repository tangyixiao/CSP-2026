#include<bits/stdc++.h>
using namespace std;
long long a[1000005];
string c[1000005];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=0;i<n;i++){
		if(c[i]==c[i+1]){
			cout<<0;
		}
	}
	return 0;
}


