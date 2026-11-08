#include<iostream>
using namespace std;
int cut;
char s[100001];
char s1[100001];
char s2[100001];
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	int n,x=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int m;
		char c;
		cin>>m>>c;
		for(int j=x;j<x+m;j++){
			s[j]=c;
		}
		x+=m;
	}
	for(int i=0;i<x/2;i++){
		s1[i]=s[i];
	}
	if(x%2!=0){
		for(int i=x/2+1;i<x;i++){
			s2[i]=s[i];
		}
	}
	else{
		for(int i=x/2;i<x;i++){
			s2[i]=s[i];
		}
	}
	for(int i=0,o=x-1;i<x/2;i++,o--){
		if(s1[i]!=s2[o]){
			cut++;
		}
	}
	cout<<cut;
	return 0;
}
