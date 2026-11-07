#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long a,b=0,e=0,f,g=0;
	char c;
	string d;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b;
		e+=b;
		cin>>c;
		for(int j=0;j<b;j++){
			d+=c;
		}
	}
	f=e-1;
	if(e%2==0){
		g++;
		for(int i=0;i<e/2;i++){
			if(d[i]!=d[f-1]){
				d[f]=d[i];
				g++;
			}
			f--;
		}	
	}
	else{
		for(int i=0;i<(e-1)/2;i++){
			if(d[i]!=d[f]){
				d[f]=d[i];
				g++;
			}
			f--;
		}
	}
	cout<<g;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
