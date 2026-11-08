#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a[1000000003],c=1;
	cin >> n;
	string S;
	char x[200005];
	for(int i=1;i<=n;i++){
		cin >> a[i] >> x[i];
	}
	for(int i=1;i<=n;i++){
		
	}
	for(int i=1;i<=n;i++){
		for(int z=1;z<=n;z++){
			if(x[i]!=x[z])c=0;
		}
	}
	if(c==1){
		for(int i=1;i<=n;i++){
		    for(int z=a[i];z>=1;z--){
		    	cout << x[i];
			}
	}
	return 0;
	}
	
}
