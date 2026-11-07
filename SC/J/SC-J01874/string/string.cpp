#include<bits/stdc++.h>
using namespace std;
int n;
//string s[200010];
int x[200010];
char y[200010];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>x[i]>>y[i];
		//s[i]=x[i]*y[i];
	}
	unsigned long long head_x=0,tail_x=0,min1=0;
	for(int i=1;i<=n;i++) tail_x+=x[i];
	char head_y=y[1],tail_y=y[n];
	int g=1,r=n;
	while(head_x!=tail_x){
		if(head_y!=tail_y){
			if(x[g]<x[r]){
				min1+=x[g];
			    head_x+=x[g];
				tail_x-=x[g];
				x[r]-=x[g];
				head_y=y[++g];
			}
			else if(x[g]>x[r]){
				min1+=x[r];
				head_x+=x[r];
				tail_x-=x[r];
				x[g]-=x[r];
				tail_y=y[--r];
			}
			else{
				head_y=y[++g];	
				tail_y=y[--r];
				min1+=x[g];
			}
		}
		else{
			head_y=y[++g];	
			tail_y=y[--r];
			head_x+=x[r];
			tail_x-=x[r];
		}
	}
	cout<<min1;
	return 0;
}