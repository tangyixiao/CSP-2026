#include <bits/stdc++.h>
using namespace std;

int n,l=0,t=0,L=0;
string s;
int a;
char c;


int main(){

	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	
	
	cin>>n;		
	for(int i=0;i<n;i++){
		cin>>a>>c;
		for(int j=0;j<a;j++){
			s[l+j]=c;
			L++;	
		}
		l=a;
	}
	if(L%2!=0){
		L--;
	} 
	for(int i=0;i<L/2;i++){
		if(s[i]==s[L-i]){
			continue;
		}
		t++;
	}
	cout<<t<<endl;
	
	
	
	
	
	
	
	return 0;
}