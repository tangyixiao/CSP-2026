#include<bits/stdc++.h>
using namespace std;

const int N=2*1e5+5;
long long n,a[N],ans;
char c[N];
bool b=0;

int main(){
	freopen("string5.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=1;i<n;i++){
		if(c[i]!=c[i-1]){
			b=1;
		}
	}
	if(b==0){
		cout<<0;
	}
	else{
		for(int i=0;i<n;i++){
			ans+=a[i];
		}
		cout<<ans/2;
	}
	return 0;
}
