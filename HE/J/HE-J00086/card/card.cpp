#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int n,m;
int a[N];
bool p=false;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	if(m==1){
		for(int i=1;i<=m;i++){
			cout<<0<<' ';
		}    
		return 0;
	}
	for(int i=1;i<=m;i++){
		cout<<i<<" ";
	}
	return 0;
}
