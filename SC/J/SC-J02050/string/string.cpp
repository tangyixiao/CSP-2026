#include<bits/stdc++.h>
using namespace std;
int c(int a,int b){
	if(a>=b)return a-b;
	else return b-a;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int a[200001]={};
	char b[200001]={};
	int n,t=0,num=0,s=0,w=0,y=0,m=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		num+=a[i];
		w+=a[i];
	}
	while(num/2!=m){
		if(b[s]!=b[w]){
			if(a[s]>=a[w]){
				a[s]==c(a[s],a[w]);
				t+=a[w];
				m+=t;
				w--;
			}
			else{
				b[w]==c(a[s],a[w]);
				t+=a[s];
				m+=t;
				s++;
			}
		}
	}
	cout<<t;
} 