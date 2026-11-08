#include<bits/stdc++.h>
using namespace std;
int n,m,x,y,sum,num;
int a[1005];
int main(){
	freopen("migrate.in","r",stdin);
	freopen("migrate.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>x>>y;
		for(int j=1;j<=x;j++){
			cin>>a[j];
		}
	}
	int head=1,tail=1;
	for(int i=1;i<=x;i++){
		for(int j=1;j<=x;j++){
			if(a[head]+y>=a[tail]&&tail!=x){
				tail++;
				num++;
			}else{
				head++;
			}
			if(num>=2)sum++;
		}
			cout<<sum;
	}	

	return 0;
} 
