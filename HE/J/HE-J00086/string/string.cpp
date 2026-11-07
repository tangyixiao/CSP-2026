#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n;
int a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i]>>c[i];
	}
	if(n==1){
		cout<<0;
		return 0;
	}else if(n==2){
		if(c[1]==c[2]){
			cout<<0;
			return 0;
		}else{
			cout<<min(a[1],a[2]);
			return 0;
		}
	}else{
		if((n&1)==0){
			cout<<n-1;
			return 0;
		}else{
			cout<<n-2;
			return 0;
		}
	}
	return 0;
}
