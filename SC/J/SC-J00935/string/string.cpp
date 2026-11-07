#include<bits/stdc++.h> 
using namespace std;
int S1=0;
int asd(int s1,int s2,string S[2*10^5]){
	if(S1%2==0){
		int ooo=0;
		for(int s1=1,s2=S1;s2-s1 == 1;s1++,s2--){
			if(S[s1]==S[s2]){
				cout<<"";
			}
			else{
				ooo++;
			}
		}
		return ooo;
	}
	else{
		int ooo=0;
		for(int s1=1,s2=S1;s2-s1 == 2;s1++,s2--){
			if(S[s1]==S[s2]){
				cout<<"";
			}
			else{
				ooo++;
			}
		}
		return ooo;	
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string S[2*10^5];
	for(int i=1;i<=n;i++){
		int j;
		cin>>j;
		char j1;
		cin>>j1;
		for(int p=1;p<=j;p++){
			S[S1]=j1;
			S1++;	
		}
	}
	bool qwe=0;
	if(S1%2==0){
		for(int s1=1,s2=S1;s2-s1 == 1;s1++,s2--){
			if(S[s1]==S[s2]){
				cout<<"";
			}
			else{
				qwe=0;
				break;
			}
		}
		qwe=1;
	}
	else{
		for(int s1=1,s2=S1;s2-s1 == 2;s1++,s2--){
			if(S[s1]==S[s2]){
				cout<<"";
			}
			else{
				qwe=0;
				break;
			}
		}
		qwe=1;	
	}
	if(qwe == 1){
		cout<<"0";
		return 0;
	}
	cout<<asd(1,S1,S);
	return 0;
}