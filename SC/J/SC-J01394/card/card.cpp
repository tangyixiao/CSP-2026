#include<bits/stdc++.h>
using namespace std;
int h1[500086],h2[300086]={0},h3[500086];
int main(){
	int a,b;
	cin>>a>>b;
	for(int i=1;i<=a;i++){
		cin>>h1[i];
	}
	for(int i=1;i<=a;i++){
		h3[i]=h1[i];
		if(h3[i-1]==0&&i!=1){
			h3[i]=h3[i-1];
		}
		for(int j=1;j<i;j++){
			if(h3[j]==h1[i]){
				for(int o=j;o<=i;o++){
					h3[o]=0;
				}
			}
		}
		
	} 
	cout<<a;
	return 0;
}