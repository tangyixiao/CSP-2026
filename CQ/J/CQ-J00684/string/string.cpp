#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int  z,n[200000],q=0,v=0,k=0;
	char m[200000],s[1000000];
	cin>>z;
	for(int i=1;i<=z;i++){
		cin>>n[i]>>m[i];
		v+=n[i];
	}
	for(int i=1;i<=z;i++){
		for(int l=1;l<=n[i];l++){
			q+=1;
			s[q]=m[i];
		}
	} 
	for(int i=1;i<=v/2+1;i++){
		if(i==v/2+1){
			break;
		} 
		if(s[v-i]!=s[i]){
			k=k+1;
		}
	}
	cout<<k; 
}
