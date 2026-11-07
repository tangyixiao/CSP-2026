#include<bits/stdc++.h>
 using namespace std;
 long long n,m,nn[1000086],c[1000086]={0},mm[1000086];
 
 long long sha(int a){
 	for(int t=1;t<=a;t++){
 		if(c[a]==c[t]) return t;
	 }
	 return 0;
 }
  void she(int b,int f){
 	for(int t=b;t<f;t++){
 		c[t]=0;
	 }
 }
 long long xue(int u,int w){
 	for(int t=1;t<w+1;t++){
 		if(c[t]==u) return 1;
	 }
	 return 0;
 }
 int main(){
 	cin>>n>>m;
 	for(int i=1;i<=n;i++){
 		cin>>nn[i];
	 }
	 for(int w=n;w>=1;w--){
	 	for(int k=n;k>=1;k--) c[k]=0;
	 	for(int s=n-w+1;s<=n;s++){
	 		c[s]=nn[s];
	 		if(sha(s)!=0){
	 			she(sha(s),s);
			 }
		 }
		 for(int o=1;o<=m;o++) if(xue(o,n)==1) mm[o]+=1;
	 }
	 
	 for(int o=1;o<=m;o++) cout<<mm[o]<<" ";
 	return 0;
 }