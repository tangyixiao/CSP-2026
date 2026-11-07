#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r","std.in");
	freopen("string.out","w","std.out");
	int a;
	cin>>a;
	int x[a+1];
	string y[a+1];
	for(int i=1;i<=a;i++){
		cin>>x[i];
		cin>>y[i];
	}
	long long d=0;
	long long g=x[1],h=x[a];
	int k=1,l=a;
	while(l>k){
		if(y[k]==y[l]){
			if(g>h){
				g-=h;
				h=x[l-1];
				l-=1;
				continue;
			}
			else{
				h-=g;
				g=x[k+1];
				k+=1;
				continue;
			}
		}
		if(g>h){
			d+=h;
			g-=h;
			h=x[l-1];
			l-=1;
		}
		else if(g==h){
			d+=g;
			g=x[k+1];
			h=x[l-1];
			k+=1;
			l-=1;
		}
		else{
			d+=g;
			h-=g;
			g=x[k+1];
			k+=1;
		}
	}
	cout<<d;
	return 0;
}