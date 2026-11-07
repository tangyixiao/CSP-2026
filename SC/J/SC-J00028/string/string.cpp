#include <bits/stdc++.h>
 using namespace std;
 char s[1000000003];
 int main(){
 	freopen("string.in","r",stdin);
 	freopen("string.out","w",stdout);
 	int n;
 	cin>>n;
 	int p;
 	char o;
 	int q=0;
 	int e=0;
 	for(int i=0;i<n;i++){
 		cin>>p;
 		cin>>o;
 		e=e+p;
 		for(int j=0;j<p;j++){
 			s[q]=o;
 			q++;
		 }
	 }
	 int a=0;
	 int w=e-1;
	 for(int i=0;i<e;i++){
	 	if(e%2==1){
	 		if(s[i]!=s[w]){
	 			a++;
			 }
			 if(i==w){
			 	break;
			 }
			 w--;
		 }
		 if(e%2==0){
		 	if(s[i]!=s[w]){
		 		a++;
			 }
			 if(i+1==w){
			 	break;
			 }
			 w--;
		 }
	}
	cout<<a;
	return 0;
 }