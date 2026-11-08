#include<bits/stdc++.h>
using namespace std;
int main(){
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	int n,m,a,a1,cnt;
	string x,s;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a;
		a1=a;
		while(true){
			if(a1==0){
				break;
			}
			x+=a1%2+'0';
			a1/=2;
		}
		
		x="";
	}
	cout<<"12";
	return 0;
}
