#include<iostream>
using namespace std;
int main(){
	int count=0,l,a,m;
	char n;
	char s[3000]={};
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>m>>n;
		for(int j=0;j<m;j++){
			s[j+l]=n;
		}
		l+=m;
	}
	for(int i=0;i<l/2;i++){
		if(s[i]!=s[l-i-1]){
			count++;
		}
	}
	cout<<count;
} 
