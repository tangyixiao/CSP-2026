#include<bits/stdc++.h>
using namespace std;
int main(){
	preopen("travel.in","r",stdin);
	preopen("travel.out","w",stdout);
	int a,b[2000],sum=0;
	string s1[2000];
	cin>>a;
	for(int i=1;i<=a+1;i++){
		cin>>b[i];
		for(int j=b[i-1];j<=b[i];j++){
			cin>>s1[j];
			if(s1[j]==s1[j+1]){
				cout<<"0";
			}
		}
	}
	return 0;
} 
