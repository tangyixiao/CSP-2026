#include<iostream>
using namespace std;
int n,m,x[200009],ans=-0x7fffffff;
int nums[200009];
void ch(int cnt,int last){
	if(last>n-1){
		return;
	}
	if(cnt==m){
		int fans=0xffffffff;
		for(int a=0;a<m;++a){
			fans&=nums[a];
		}
		ans=ans>fans?ans:fans;
		return;
	}
	for(int a=last+1;a<n;++a){
		nums[cnt]=x[a];
		ch(cnt+1,a);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int a=0;a<n;++a){
		cin>>x[a];
	}
	ch(0,-1);
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
