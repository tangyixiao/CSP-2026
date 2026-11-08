#include<bits/stdc++.h>
using namespace std;
int a[200005],k=0;
char num[0x3f]
void f(int x,y){
	for(int i=1;i<=n;i++){
		num[i]=x%2+'0';
		x=x/2+'0';
		k++;
	}
	for(int i=k;i>0;i--){
		int s+=num[i];
	}
	a[y]=s-'0';
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		f(a[i],i);
	}
	
	fclose(stdin);fclose(stdout);
	return 0;
}

