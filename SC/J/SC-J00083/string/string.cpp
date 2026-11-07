#include <iostream>
using namespace std;
int main(){
	string S[1000]={};
	char a;
	int L,d=0,r;
	cin>>L;
	for(int i=0;i<L;i++){
		cin>>r;
		cin>>a;
		for(int k=0;k<r;k++)
			S[i]=a;
	
	}
	for(int j=0;j<(L-1)/2;j++){
		if(S[j]!=S[L]){
			for(int q=0;q<(L-1)/2;q++){
				if(S[q]==S[L]){
					S[j]=S[q];
					d++;
					
				}
			}
		}
	}
	cout<<d;
	return 0;
}