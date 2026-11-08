#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500000];
int ans[5000005];
bool flag=1;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;n>=i;i++){
	cin>>a[i];	
	if(a[i]<a[i-1])flag=0;
	}
	if(flag==0){
	for(int i=1;n>=i;i++){
		int pl[500000]={0};
		int r=0;
		stack<int>s;
		for(int j=i;n>=j;j++){
			if(pl[a[j]]!=0){
				while(s.top()!=a[j]){
					pl[s.top()]=0;
					s.pop();
					r--;
				}
				s.pop();
				r--;
			}
			s.push(a[j]);
			r++;
			pl[a[j]]=r;
		}
		for(int j=1;m>=j;j++)if(pl[j])ans[j]++;
	}
	for(int i=1;m>=i;i++)cout<<ans[i]<<" ";	
	}
	else {
	for(int i=1;n>=i;i++)ans[a[i]]=i;
	for(int i=1;m>=i;i++)cout<<ans[i]<<" ";
	}
}
