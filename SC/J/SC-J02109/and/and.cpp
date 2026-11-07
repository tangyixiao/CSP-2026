#include<bits/stdc++.h>
using namespace std;
long long int n,m,nem; 
long long int a[100005];
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	sort(a+1,a+1+n,cmp);
	nem=a[1]; 
	for(int i=2;i<=m;i++){
		nem=nem&a[i];
	}
	printf("%d",nem);
    return 0;
}