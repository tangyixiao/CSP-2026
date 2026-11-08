#include<bits/stdc++.h>
using namespace std;

int main(){
  	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long a;
	int n,cnt=0;
	string c,x,y;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			x+=c;
		}	
	}
	for(int k=x.size();k>=1;k--){
		y+=x[k-1];
	}
	if(x!=y){
		for(int j=1;j<=x.size();j++){
			if(x[j]!=y[j]){
				cnt++;
			}//ÕÒ²»Í¬ 
		}//±éÀú x
		cout<<cnt; 
	}
	else cout<<0;
	
	
	return 0;
}
