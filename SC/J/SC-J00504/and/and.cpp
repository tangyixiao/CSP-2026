#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int a[200020]={0};

int getlth(int x){
	return 64-__builtin_clzll((long long)x);
}

bool cmp(int x,int y){
	return x>=y;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	sort(a+1,a+n+1,cmp);
	int maxlth=getlth(a[1]);
	int ans=0;
	while(maxlth){
		if(a[m]==0){
			break;
		}
		
		if(getlth(a[m])<maxlth){
			for(int i=1;a[i]>=(1<<(maxlth-1));i++){
				a[i]-=(1<<(maxlth-1));
			}
			sort(a+1,a+n+1,cmp);
			maxlth=getlth(a[1]);
			continue;
		}
		
		ans+=(1<<(maxlth-1));
		int sg=n;
		for(int i=1;i<=n;i++){
			a[i]=max((a[i]-(1<<(maxlth-1))),0);
			if((a[i-1]!=0)&&(a[i]==0)){
				sg=i;
			}
		}
		n=sg;
		sort(a+1,a+n+1,cmp);
		maxlth=getlth(a[1]);
	}
	
	cout<<ans;
	
	
	return 0;
	
	fclose(stdin);
	fclose(stdout);
}