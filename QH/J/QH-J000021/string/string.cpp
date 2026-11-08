#include <bits/stdc++.h> 
using namespace std;

int main(){
	freopen("string.in","r",stdin);	
	freopen("string.out","w",stdout);
	
	string x,y,c;
	int n,cnt;
	long long a;	
	cin>>n>>cnt>>a;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=a;j++){
			x=c;
		} 
	}
	for(int j=a;j>=a;j--){
		y=x;
	}
	if(x!=y){
		for(int j=1;j<=x.size();j++){
			if(x[j]=y[j]){
				cnt++;
			}
		}
		cout << cnt;
	}else{
		cout << 0;
	}
	return 0;
} 
