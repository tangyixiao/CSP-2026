#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a[n] ,b[n];
	char ans[200005] ;
	int time=0
	for(int i==0;i<n;i++){
		cin>>a,b;
		for(int j=0;j<a[i;j++]){
			ans [time]=b;
			time++;
		}
	}
	int ans1=0
	if(time+1 % 2 ==0;){
		int ka =((1+time)/2)-1;
		int ka1=ka+1-2;
		for(int i=ka1+1;i<time;i++){
			if(ans[i]==ans[ka-1]){
				cout<<time;
			}
			eles{
				ans1++
			}
			ka--;
		}
	}
	return 0;
}
