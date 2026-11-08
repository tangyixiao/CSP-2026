#include<bits/stdc++.h>
using namespace std;
using i32=int;
#define int long long
const int MAXN=1e8+10;
int v[MAXN]={0};
i32 main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,sum=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v[a]++;
	}
	int x=m,y=0;
	for(int i=MAXN;i>=0;i--){
		if(m==0)
			break;
		if(v[i]>0&&x>0){
			if(y==0)
				y=i;
			else
				y=y&i;
			x--;
		}
		if(v[i]>1){
			if(v[i]<=m){
				m-=v[i];
				sum+=i;
			}else{
				sum+=i;
				break;
			}
		}
	}
	if(sum>0)
		cout<<sum;
	else
		cout<<y;
	return 0;
} 
