#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	long long a[n];string c[n];
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	int b=1;
	for(int i=0;i<n;i++){
		if(a[i]!=a[i+1]){
			b=0;
		} 
	}int m=0;
	if(b==1){
		for(int i=0;i<n;i++){
			if(c[i]!=c[i+1]){
				m=i+1;break;
			}
		}
		cout<<m*a[1];
	}
	string s[100005];
	int v=0;long long z=0;int w=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<a[i];j++){
			s[w]=c[i];v++;w=w+1;
		}
	}
	//cout<<v;
//	for(int i=0;i<v;i++){
//		cout<<s[i];
//	}
	//cout<<v;
	int v1=v;
		for(int i=0;i<v/2;i++){
			
			if(s[i]==s[v1-1]){
				v1--;
			}else{
				s[v1-1]=s[i];z++;v1--;
			}
		}
	cout<<z;
	
	return 0;
}
