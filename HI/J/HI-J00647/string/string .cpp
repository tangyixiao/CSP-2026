#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,m,p=0;
	char c;
	cin>>n;
	int b=n;
	char cc;
	cin>>m>>cc;
	if(m>1)
	b=b-1+m;
	for(int i=2;i<=n;i++){
	cin>>m>>c;
	p+=c;
	if(m>1)
	b=b-1+m;
}
	if(p+c==cc*n){
		cout<<0;
	}
	else
	cout<<b/2+1;
	return 0; 
}
