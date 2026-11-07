#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	int sum=0;
	if(s1==s3){
		cout<<1;
		sum++;
		bool f=0;
		for(int i=0;i<2;i++){
			if(s2[i]!=s4[i]){
				f=1;
			} 
		}
		if(!f){
			cout<<1;
			sum++;
			if(s2[2]>='A' && s2[2]<='C' && s4[2]>='A' && s4[2]<='C' || s2[2]>='D' && s2[2]<='F' && s4[2]>='D' && s4[2]<='F'){
				cout<<1;
			}
			else f=1;
			if(!f){
				sum++;
				if(s2[2]+1==s4[2] || s2[2]-1==s4[2]){
					cout<<1;
					sum++;
				}			
			}
			
		}

	}
	for(int i=1;i<=4-sum;i++){
		cout<<0;
	}
	return 0;
} 
