#include<bits/stdc++.h>
#define L long long
using namespace std;
const int N=1e6+10;
int a[N],b[N],c[N],d[N];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,c3,c4;
	cin>>c1>>c2>>c3>>c4;
	for(int i=0;i<c1.size();i++){
		a[i]+=c1[i]-'0';
		//cout<<a[i];
	}
	for(int i=0;i<c3.size();i++){
		b[i]+=c3[i]-'0';
		//cout<<a[i];
	}
	int x=1;
	int y=1;
	int z=0;
	int q=0;
	for(int i=0;i<c1.size();i++){
		if(a[i]!=b[i]){
			x=0;
		}
	}
	if(x==1){
		cout<<1;
	}else if(x==0){
		cout<<"0000";
		return 0;
	}
	for(int i=0;i<c2.size();i++){
		if(c2[i]>='0'&&c2[i]<='9'){
			c[i]+=c2[i]-'0';
			//cout<<a[i];	
		}
	}
	for(int i=0;i<c4.size();i++){
		if(c4[i]>='0'&&c4[i]<='9'){
			d[i]+=c4[i]-'0';
			//cout<<a[i];
		}
	}
	for(int i=0;i<c2.size();i++){
		if(c[i]!=d[i]){
			y=0;
		}
	}
	for(int i=0;i<c2.size();i++){
		if(c4[i]=='A'||c4[i]=='B'||c4[i]=='C'&&c2[i]=='A'||c2[i]=='B'||c2[i]=='C'&&y==1){
			z=1;
			if(c4[i]==c2[i]||abs(c4[i]-c2[i])==1){
				q=1;
			}
		}
	}
	if(y==1){
		cout<<1;
	}else if(y==0){
		cout<<0;
		z=0;
	}
	if(y==0&&abs(c4[2]-c2[2])==1){
		q=0;
	}
	if(z==1){
		cout<<1;
	}else if(z==0){
		cout<<0;
	}
	if(q==1){
		cout<<1;
	}else if(q==0){
		cout<<0;
	}
	return 0;
}
