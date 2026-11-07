#include<bits/stdc++.h>
using namespace std;
int n,m;
bool in(int k,vector<int> a){
	for(auto i:a){
		if(i==k) return true;
	}
	return false;
}
int find_i(int k,vector<int> a){
	for(int i=1;i<=n;i++){
		if(a[i]==k) return i; 
	}
	return -1;
}
void fh(int k,vector<int> &a){
	if(in(k,a)){
		int fin=find_i(k,a);
		int si=size(a);
		for(int i=fin;i<=si-1;i++){
			a.pop_back();
		}
	}
	a.push_back(k);
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	vector<int> a(n+1,0),b(n+1,0);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	int m1[m+1];
	for(int i=1;i<=m;i++){
		m1[i]=0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
			fh(b[j],a);
			for(int z:a){
				cout<<z<<' ';
			}
			cout<<endl;
		}
		bool tmp=false;
		for(int j=1;j<=m;j++){
			for(int z:a){
				if(z==j){
					m1[j]++;
					break;
				}
			}
		}
		while(!a.empty()){
			a.pop_back();
		}
		a.push_back(0);
		for(int i=2;i<=n;i++){
			a.push_back(b[i]);
		}
		b.pop_back();
		for(int i=1;i<=n;i++){
			b[i]=a[i];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<m1[i]<<' ';
	}
}