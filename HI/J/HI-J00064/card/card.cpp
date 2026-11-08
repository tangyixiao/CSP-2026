#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
const int M=3e5+10;
int a[M];
int c[N];
vector<int>b;
int n,m;
int l,r;
int check(){
	if(r<0)return 0;
	if(b[r]==b[l])return 1;
	r--;
	return check();
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>c[i];
	}
	for(int i=1;i<=n;i++){
		b.clear();
		for(int j=i;j<=n;j++){
			b.push_back(c[j]); 
 			l=b.size()-1;
 			r=l-1;
 			if(check())b.erase(b.begin()+r,b.end()-1);
		}
//		for(int l=0;l<b.size();l++){
//			cout<<b[l]<<" ";
//		}
//		cout<<"\n";
		for(int j=0;j<b.size();j++){
			a[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}  

