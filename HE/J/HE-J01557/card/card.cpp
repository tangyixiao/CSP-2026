#include<bits/stdc++.h>
using namespace std;
int main(){
	long long m,n,y=0;
	long long num[100005];
	string p,t,pd;
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>m>>n;
	for(int i=0;i<n;i++){
		char g;
		cin>>g;
		p+=g;
	}
	for(int i=0;i<m-1;i++){
		char h=p[i];
		for(int j=1;j<m-2;j++){
			if(h==p[j]){
				y++;
			}
		}
		if(p[i]==p[i+1]){
			y++;
		}
	}
	if(y==0)
	{
		for(int i=0;i<n;i++){
			cout<<n<<' ';
		}
	}
	else{
		if(m%2==0){
			for(int i=0;i<n;i++){
				cout<<0<<' ';
			}		
		}
		else{
			for(int i=1;i<n;i++){
				cout<<0<<' ';
			}
			cout<<1;		
		}
	}
	if(1!=0){
	}

	return 0;
}
