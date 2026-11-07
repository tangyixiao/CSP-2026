#include<bits/stdc++.h> 
using namespace std;
long long int a[200001],used[200001];
string s[200001];
long long int n,m,da=0;
long long int l;
string change(int a){
	string b,k;
	while(a!=0){
		b=b+(char)(a%2+48);
		a=a/2;
	}
	/*for(int i=b.size()-1;i>=0;i--){
		k=k+b[i];
	}*/
	return b;
}string yu(string a,string b){
	string c;
	for(int i=0;i<max(a.size(),b.size());i++){
		if(a[i]==b[i]){
			c=c+'1';
		}else{
			c=c+'0';
		}
	}
	int t=0;
	for(int i=max(a.size(),b.size());i>0;i--){
		if(c[i]==1){
			break;
		}
		t++;
	}
	return c;
	l=c.size()-t;
}
int shi(string j){
	long long int q=1,v=0;
	for(int i=1;i<j.size();i++){
		q=q*2;
	}
	for(int i=0;i<j.size();i++){
		v=v+(j[i]-48)*q;
		q=q/2;
	}
	return v;
}
void go(int k,string z){
	if(k==0){
		if(da<shi(z)){
			da=shi(z);
		}
	}
	string p;
	for(int i=1;i<=n;i++){
		if(used[i]==0){
			p=change(a[i]);
			if(z==""){
				used[i]=1;
				go(k-1,p);
			}else{
				used[i]=1;
				go(k-1,yu(p,z));
			}
		}
	}
}


int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	}
	go(m,"");
	cout<<da;
	return 0;
}