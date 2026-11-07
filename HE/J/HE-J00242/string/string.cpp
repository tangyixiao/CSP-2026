#include<bits/stdc++.h>
using namespace std;
int a[200010],n,cnt,h;
string b,c,d,e;
bool hw(string x){
	int t=0;
	string y;
	for(int i=x.size()-1;i>=0;i--){
		y[t]=x[i];
		t++;
	}
	if(y==x){
		return true;
	}
	t=0;
	return false;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		for(int j=1;j<=a[i];j++){
			c[cnt]=b[i];
			cnt++;
		}
	}
	cnt=0;
	for(int i=c.size()-1;i>=0;i--){
		d[cnt]=c[i];
		cnt++;
	}
	if(d==c){
		cout<<0;
		return 0;
	}
	cnt=0;
	e=c;

	for(int i=0;i<n;i++){
		h++;
		for(int j=0;j<n;j++){
			for(int k=0;k<h;k++){
				c[j]=b[i];
				if(hw(c)==true){
					cout<<h;
					return 0;
				}else c=e;
			}
			
		}
	}
	return 0;
}
