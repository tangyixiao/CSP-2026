#include <bits/stdc++.h>
using namespace std;
int n=0,p=0,b=0,c,q;                                                                                                                                                                                                                                                                   
int a[200000]; 
int yu(int x,int y){
	if(x==1){
		return y;
	}
	int c=0;
	c=y&a[0];                                                                                                              
	for(int i=0;i<n;i++){
		if(y&a[i]>c){
			c=y&a[i];
			a[i]=0;
		}
	}
	y=c;
	x=x-1;
	cout<<y<<endl;
	return yu(x,y);
}
int main(){
	freopen(const string"and.in")
	cin>>n>>q;
	int e,f;
	for(int i=0;i<n;i++){
		cin>>a[i]; 
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(p<(a[i]&a[j])){
				p=a[i]&a[j];
				e=i;
				f=j;	
			}
		}
	}
	a[e]=0;
	a[f]=0; 
	q=q-1;
	cout<<yu(q,p);
	return 0;
}

/*	string c1,c2;
	char s1,s2,s3,s4,s5,s6;
	cin>>c1>>s1>>s2>>s3>>c2>>s4>>s5>>s6;
	if(c1==c2){
		cout<<1;
	}else{
		cout<<0<<' '<<0<<' '<<0<<' '<<0;
		return 0;
	}
	if(s1+s2==s4+s5){
		cout<<1;
	}else{
		cout<<0<<' '<<0<<' '<<0;
		return 0;
	}
	if(s3-s6<4){
		cout<<1;
	}else{
		cout<<0<<' '<<0;
		return 0;	
	}
	if(s3-s6==1){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}
*/
/*int n=0;
cin>>n;
int a[n];
char c[n];
for(int i=0;i<n;i++){
	cin>>a[i]>>c[i];
}
string x,y;
int m=0;
for(int i=0;i<n;i++){
	if(c[i]!=c[n-1-i]){
		m++;
	}
}
cout<<m;
return 0;
}*/
/*cin>>n>>m;
int a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
for(int i=0;i<n;i++){
	for(int j=i+1;j<n;j++){
		if(p<(a[i]&a[j])){
			p=a[i]&a[j];
			a[i]=0;
			a[j]=0;
		}
	}
}
cout<<yu(q,p,a);
return 0;
}*/
