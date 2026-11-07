#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+1;
int n,i,m;
long long ans=0;
long long a[maxn];

bool cmp(int x,int y){
	return x>y;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	cin>>n>>m;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+i+1,cmp);
	for(int q=31;q>=0;q--){
		bool t=true;
		for(int p=1;p<=m;p++){
			if(a[p]>=pow(2,q)){
				a[p]-=pow(2,q);
			}
			else{
				t=false;
				break;
			}
		}
		if(t==true){
			ans+=pow(2,q);
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
} 
