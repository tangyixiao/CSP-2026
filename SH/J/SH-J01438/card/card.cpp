#include<bits/stdc++.h>
using namespace std;
int main(){
	//freopen("card.in","r",stdin);
	//freopen("card.out","r",stdout);
	int a,b;
	cin>>a>>b;
	int n[20000]={};
	for (int i=0;i<a;i++){
		cin>>n[i];
	} 
	int n1[20000]={},m1[20000]={};
	int a1=0,mj=0,a2=0;
	for (int i=0;i<a;i++){
		n1[a1]=n[i];
		a1++;
		mj=0;
		a2=a1;
		for (int j=0;j<a2;j++){
			if(n1[j]==n[i] || mj==1){
				n1[j+1]==0;
				mj=1;
				a1--;
			}
		}
		for (int i=0;i<a;i++){
			m1[n1[i]]++;
		}
		for (int i=1;i<b;i++){
			cout<<n1[i]<<" ";
		}
	}
	return 0;
} 
