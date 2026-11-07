#include<bits/stdc++.h>;
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string a,b,c,d,m;
	int n=0,x[200001],y[200001],max=0,p=0,o=0,w=0;
	char f,g;
	cin>>a>>b>>c>>d;
	if(a==c){
		m[n]+=1;
		n++;	
	}else{
		m[n]+=0;
		n++;
	}
	for(int i=0;i<b.size();i++){
		if(b[i]>=0&&b[i]<=9){
			x[p]=b[i];
			p++; 
		}else{
			f=b[i];
		}
	}
	for(int j=0;j<d.size();j++){
		if(d[j]>=0&&d[j]<=9){
			y[o]=d[j];
			o++; 
		}else{
			g=d[j];
		}
	}
	if(o>p){
		max=o;
	}else{
		max=p;
	}
	for(int f=0;f<max;f++){
		if(x[f]==y[f]){
			w++;
		}
	}
	if(w==max){
		m[n]+=1;
		n++;
	}else{
		m[n]+=0;
		n++;
	}
	if((f=='A'||f=='B'||f=='C'&&g=='A'||g=='B'||g=='C')||(f=='D'||f=='F'&&g=='D'||g=='F')){
		m[n]+=1;
		n++;
	}else{
		m[n]+=0;
		n++;
	}
	if(f-g==1){
		m[n]+=1;
	}else{
		m[n]+=0;
	} 
	for(int h=0;h<m.size();h++){
		cout<<m[h];
	}
	return 0;
}
