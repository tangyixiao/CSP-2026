#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
  	freopen("and.out","w",stdout);
  	int n,m,a[100001],s=0;
  	cin>>n>>m;
  	for(int i=1;i<=n;i++)cin>>a[i];
  	sort(a+1,a+1+n,cmp);
  	s=a[1];
  	for(int i=1;i<=m;i++){
  		s=s&a[i];
	}cout<<s;
	fclose(stdin);
 	fclose(stdout); 
	return 0;
} 
