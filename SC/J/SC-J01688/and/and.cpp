#include<iostream>
using namespace std;
int n,m,a[100005],b[100005];
int yu(int x,int y){
	int x1[32]={0},y1[32]={0},z1[32]={0},sum=0;
	int o=0;
	while(x||y){
		o+=1;
		x1[o]=x%2;                
		x/=2;                  
		y1[o]=y%2; 
		y/=2;           
	}               
	for(int i=1;i<=31;i++){
		if(x1[i]==0||y1[i]==0){
			z1[i]=0;
		}
		else{
			z1[i]=1;
		}
	}
	int j=1;
	for(int i=1;i<=31;i++){
		sum+=z1[i]*j;
		j*=2; 
	}
	return sum;
}
mei(int left,int st){
	if(st==0){
		return a[left];
	}
	if(n-left+1<st){
		return 0; 
	}
	int g=mei(left+1,st);
	int h=mei(left+1,st-1);
	return max(yu(a[left],h),g); 
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cout<<mei(1,m);
	return 0;
} 