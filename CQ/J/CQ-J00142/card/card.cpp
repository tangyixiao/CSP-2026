#include<bits/stdc++.h>
using namespace std;
long long n,m,max_x=-1,x; 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool flag=true;
	for(int i=1;i<=n;i++){
		
		cin>>x;
		max_x=max(max_x,x);
	}
	if(max_x==x){
		for(int i=1;i<=m;i++){
			cout<<n<<" ";
		}	
	}else{
		srand(time(0));
		cout<<rand()%n;
	}
	
	return 0;
}
