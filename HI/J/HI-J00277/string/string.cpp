#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen(".in","r",stdin);
	freopen(".out","w",stdout);
	int n,i,j,a=0,c,d=1,g=0,o=0,p;
	char h;
	string s,x,y;
	cin>>n;
	cin>>j>>h;
	o=j;
	for(i=2;i<=n;i++){
		for(p=a;p<=o;p++){
			s[p]=h;
		}
		a=j+1;
		o=o+j;
		cin>>j>>h;
		
	}
	c=s.size();
	if(c%2==0){
		for(i=1;i<=c/2;i++){
			x[i]=s[i];
	}
		for(i=c;i<=c/2;i++){
			x[d]=s[i];
			d++;
	}
	}
	else{
		for(i=1;i<=c/2;i++){
			x[i]=s[i];
	}
		for(i=c;i<=ceil(c/2);i++){
			x[d]=s[i];
			d++;
	}
	}
	for(i=1;i<=c/2;i++){
		if(x[i]!=y[i]){
			g++;
		}
	}
	cout<<g;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
