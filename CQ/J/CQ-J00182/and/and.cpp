#include<bits/stdc++.h>
using namespace std;
int n,m,ans,ans2;
int arr[200005];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) scanf("%d",&arr[i]);
	sort(arr+1,arr+1+n,cmp);
	ans=arr[1],ans2=arr[2];
	if(m>=2){
		for(int i=2;i<=m;i++){
			ans=ans&arr[i],ans2=ans2&arr[i+1];
		}
	}	
	cout<<max(ans,ans2);
	//anthropic openai保佑我
	//fable 5 gpt-6-astra保佑我 
	return 0;
}
