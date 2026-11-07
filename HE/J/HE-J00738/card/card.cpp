#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m,a[50000]={0},x[50000]={0},in[60000]={0},b;
	cin>>n>>m;
	stack<int>c;
	for(int i=0;i<n;i++)cin>>in[i];
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			b=in[i];
			if(a[b]==0){
				a[b]++;
				c.push(b);
			}
			else{
				while(!c.top()==b){
					a[c.top()]--;
					c.pop();
				}
				a[b]=1;
			}
		}
		while(!(c.empty())){
			x[c.top()]+=1;
			c.pop(); 
		}
	}
	for(int i=1;i<=m;i++)cout<<x[i]<<' ';
	fclose(stdin);
	fclose(stdout);
	return 0;
}
