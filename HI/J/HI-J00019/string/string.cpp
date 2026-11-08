#include<bits/stdc++.h>
using namespace std;
long long a[1000005];
string c[1000005];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	bool t=false;
	for(int i=0;i<n;i++){
		t=false;
		if(c[i]==c[i+1]){
			t=true;
		}
	}
	if(t==true){
		cout<<0;
	}
	
	return 0;
}
