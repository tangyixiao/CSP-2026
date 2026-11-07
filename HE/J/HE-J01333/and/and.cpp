#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int y){
    return x>y;
}
int main(){
    freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,tmp;
	scanf("%d %d",&n,&m);
	int a[n+5];
	for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
	}
	sort(a,a+n,cmp);
	tmp=a[1];
	for(int i=1;i<m;i++){
        tmp&=a[i];
        tmp=a[i];
	}
	printf("%d",tmp);
	fclose(stdin);
	fclose(stdout);
	return 0;
	}
