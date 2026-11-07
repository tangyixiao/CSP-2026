#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long x=0,y=0,z=0,b=0,g=0;//x:长度 y:奇偶 z:计数 
	string a,s;
	char k;
	cin>>x;
	int c[x]={0};
	if(x%2==0){
		y=1;
	}
	for(int i=0;i<x;i++){
		cin>>c[i];
		cin>>k;
		a=a+k;
	}
	for(int i=0;i<x;i++){
		for(int j=0;j<c[i];j++){
			s=s+a[i];
		} 
	}
	if(y==1){//区别对待 
		z=s.size();
		z=z/2;
		for(int i=z;i<s.size();i++){
			if(s[i]!=s[b]){
				g++;
			}
			b++;
		}
		cout<<g;
		return 0;//提前结束 
	}
	z=s.size()+1;
	z=z/2;	
	for(int i=z;i<s.size();i++){
		if(s[i]!=s[b]){
			g++;
		}
		b++;
	}
	cout<<g;	
	return 0;
}