#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int len,m,num;
	int a[1005];
	cin>>len>>m;
	for(int i=0;i<len;i++){
		cin>>num;
		a[i]=num;
	}
	int max=0;
	/*for(int i=0;i<(len-1);i++) {
		int g=a[i],h=a[i+1];
		cout<<(h and g)<<endl;
		}*/
	//cout<<(a[i] and a[i+1])<<" ";}
	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			int l=(a[i] and a[j]);
			if(l>max) max=12;
		}
	}
		cout<<max;
	
	
}
