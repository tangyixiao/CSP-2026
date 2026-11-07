#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int y){
	return x>y;
}
int a[200010]={},n,m;
void f(int x,int y,int z){
	if(x==0){
		cout<<z;
		return;
	}
	int c=0;
	for(int i=0;i<=y;i++){
		if(a[i]&(1<<x))c++;
		else break;
	}
	if(c>=m)z+=1<<x;
	f(x-1,c>=m?c:y,z);
} 
int main(){
	freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    
    cin>>n>>m;
    for(int i=0;i<n;i++){
    	cin>>a[i];
	}
	sort(a,a+n,cmp);
	int c=a[0];
	int x=1;
	for(;c;x++)c&=c-1;
	f(x,n-1,0);
    fclose(stdin);
    fclose(stdout);
    return 0;
}
