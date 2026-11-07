#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a,b;
	cin>>a>>b;
	int c[a];
	int d=INT_MIN;
	for(int i=0;i<a;i++){
		cin>>c[i];}
	sort(c,c+a);
	if(b==1){
		cout<<c[a-1];}
	if(b==2){
		for(int i=0;i<a;i++){
			for(int j=i+1;j<a;j++){
				d=max(d,c[i]&c[j]);}}
		cout<<d;
	} 
	return 0;}
