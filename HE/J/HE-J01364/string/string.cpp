#include <bits/stdc++.h>
using namespace std;
int n;
long long a,m=0; 
string c,d,x,y;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			d+=c;
		}
	}
	if(d.size()%2==0){
		for(int i=0,j=d.size()/2-1;i<d.size();i++){
			if(i>=d.size()/2-1){
				x[j]=d[i];
				j--;
				continue;
			}
			y[i]=d[i];
		}
	}
	else{
		for(int i=0,j=(d.size()-1)/2-1;i<d.size();i++){
			if(i==(d.size()-1)/2){
				continue; 
			}
			if(i>(d.size()-1)/2){
				x[j]=d[i];
				j--;
				continue;
			}
			y[i]=d[i];
		}
	}
	for(int i=0;i<d.size()/2;i++){
		if(x[i]!=y[i]){
			m++;
		}
	}
	cout<<m;
	return 0;
} 

