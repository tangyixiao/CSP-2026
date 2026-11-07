#include<bits/stdc++.h> 

using namespace std;

int main(){
	
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
	
	int n;
	cin>>n;
	int s=0;
	for(int i=0;i<=n;i++){
		int a,b;
		cin>>a>>b;
		for(int i=0;i<=a;i++){
			s+=b;
		}
	}
	if(s=='aba' || s=='bab' || s=='baab' || s=='abba' || s=='aabaa' || s=='bbabb' || s=='abbba' || s=='baaab'){
		cout<<0;
	}
	else{
		cout<<1;
	}
	
	return 0;
}
