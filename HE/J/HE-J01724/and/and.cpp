#include<bits/stdc++.h>
using namespace std;
int a[200000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long g,m,n,x,max=-1;
	string s;

	cin>>n>>m;
	if(m==1){
		for(int i=1;i<=n;i++){
			cin>>g;
			if(max<=g){
				max=g;
			}
		}cout<<max;
		return 0;
	}else {
		for(int i=1;i<=n;i++){
		cin>>g;x=0;
		while(g!=0){
		x=g%2;
		s+=x;
		g=g/2;
		}
	}
	
	}


	return 0;
}
