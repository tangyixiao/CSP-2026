#include<bits/stdc++.h>
using namespace std;

long long a ,x[200010],ans1=0,ans2=0,x1[200010]={0},x2[200010]={0},x_[200010];
char y[200010];
bool key=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>a;
	for(int i=1;i<=a;i++){
		cin>>x[i]>>y[i];
		x1[i]=x[i]+x1[i-1];
		x_[i]=x[i];
	}
	for(int i=a;i>=1;i--){
		x2[i]=x[i]+x2[i+1];
	}
	int l=1,r=a;

	while(1){
		if(x_[l]>x_[r]){
			if(y[l]==y[r]){
				
				x_[l]-=x_[r];
				r--;
			}
			else{
				
				x_[l]-=x_[r];
				ans1+=x_[r];
				r--;
				
			}
		}
		else if(x_[l]<x_[r]){
			if(y[l]==y[r]){
				
				x_[r]-=x_[l];
				l++;
			}
			else{
				
				x_[r]-=x_[l];
				ans1+=x_[l];
				l++;
				
			}
		}
		else{
			if(y[l]==y[r]){
				r--;
				l++;
			}
			else{
				ans1+=x_[l];
				r--;
				l++;
				
			}
		}
		if(key)break;
		if(x1[l]>=x1[a]/2)key=1;
	}
	for(int i=1;i<=a;i++){
		x_[i]=x[i];
	}
	cout<<ans1;
	return 0;
} 
  