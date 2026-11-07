#include<bits/stdc++.h>
using namespace std;
string q,l,o;
long long n,k,m;
string p;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>k>>p;
		for(int j=1;j<=k;j++){
			q=q+p;
		}
	}
	if(q.size()%2==0){
		for(int i=0;i<=q.size()/2-1;i++){
			l=l+q[i];
		}
		for(int i=q.size()-1;i>=q.size()/2;i--){
			o=o+q[i];
		}
	}
	else{
		for(int i=0;i<=q.size()/2-1;i++){
			l=l+q[i];
		}
		for(int i=q.size()-1;i>=q.size()/2+1;i--){
			o=o+q[i];
		}
	}
	for(int i=0;i<l.size();i++){
		if(l[i]!=o[i]){
			m++;
		}
	}
	cout<<m;
}