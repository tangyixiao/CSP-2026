#include<bits/stdc++.h>
using namespace std;
int n,m,num[200010],numcha[200010];
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>num[i];
	sort(num+1,num+n+1,cmp);
	for(int i=1;i<=n;i++){
		numcha[i]=num[i]-num[i+1];
		if(numcha[i]==0){
			cout<<num[i];
			return 0;
		}
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
