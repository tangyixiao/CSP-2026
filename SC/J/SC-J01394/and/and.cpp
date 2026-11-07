#include<bits/stdc++.h>
using namespace std;
bool p[200088];
int main(){
	int a,b;
	cin>>a>>b;
	for(int i=1;i<=a;i++){
		cin>>p[i];
	}
	int m=1,i,j;int maxn=-9090;
	while(m!=b){
		if(m==1){
			for(i=1;i<=a;i++){
				for(j=1;j<=a;j++){
					maxn=max(maxn,int(p[i] and p[j])); 
			}
		}
		}else{
			for(i=1;i<=a;i++){
				int v=p[i] and maxn;
				maxn=max(maxn,v); 
			}
		}
		
		m++;
		
	}
	cout<<maxn;
	return 0;
}