#include<bits/stdc++.h>
using namespace std;
int a[200000];
int com(int x,int n,int m,int z){
	int me=0;
	int lastm=0;
	if(m==1){
		for(int i=0;i<n;i++){
			if(i!=z){
				int b=x&a[i];
				me=max(lastm,b);	
			}	
		}
	}else{
		m--;
		for(int i=0;i<n;i++){
			if(i!=z){
				int b=x&com(a[i],n,m,i);
				me=max(lastm,b);
			}
		}
	}return me;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int max_a=0;
	int last=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}for(int i=0;i<n;i++){
		max_a=max(last,com(a[i],n,m,i));
	}
	cout<<max_a;
	return 0;
}