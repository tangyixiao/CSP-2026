#include<bits/stdc++.h>
using namespace std;
int n,a[200020],s1=0;
char b[200020];
string s;
bool cmp(int x,int y){
	return x>y;
}
bool hui(){
	int p=0;
	for(int i=1;i<=n;i++){
		for(int j=0;j<a[i];j++){
			s[p]=b[i];
			p++;
		}
	}
	int x=0,y=s1-1;
	for(int i=0;i<=ceil(s1/2.0);i++){
		if(s[x]!=s[y]){
			return 1;
		}
		x++;
		y--;
	}
	return 0;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		s1+=a[i];
	}


	if(hui()){
		bool f=0;
		for(int i=2;i<=n;i++){
			if(a[i]!=a[i-1]) f=1;
		}
		if(f==0){
			if(n%2==0){
				cout<<s1/2;
				return 0;
			}
			else{
				cout<<(s1-1)/2;
				return 0;
			}
		}
		else{
			sort(a+1,a+1+n,cmp);
			cout<<a[1]+a[n]-1;
			return 0;
		}
	}
	else{
		cout<<0;
		return 0;
	}
	return 0;
} 