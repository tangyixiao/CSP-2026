#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a[n];
	string c;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	if(n<=2){
		if(c[0]!=c[1]){
			int mi=min(a[0],a[1]);
			cout<<mi<<endl;
		}else{
			cout<<"0"<<endl;
		}
	}
	return 0;
}
