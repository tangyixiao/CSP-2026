#include <bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	int d[a];
	char e[26];
	for(int i=0;i<a;i++){
		cin>>d[i];
		cin>>e[i];
	}
	string z;
	for(int i=0;i<a;i++){
		for(int j=0;j<d[i];j++){
			z=e[i];
		}
	}
	int t=z.size();
	
	
	int c=0;
	for(int i=0;i<t/2;i++){
		if(z[i]!=z[t-i]){
			z[t-i]=z[i];
			c++;
		}
	}
	cout <<c;
	return 0;
}

