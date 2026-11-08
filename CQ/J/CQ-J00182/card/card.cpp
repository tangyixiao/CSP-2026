#include<bits/stdc++.h>
using namespace std;
int n,m,go,qz;
int arr[500005],num[300005],xrr[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&arr[i]);
		if(xrr[arr[i]]==0) xrr[arr[i]]=i;
		else{
			qz=xrr[arr[i]];
			xrr[arr[i]]=i;
			go=xrr[arr[i]];
		}
	}
	cout<<go<<" "<<qz<<endl;
	for(int i=1;i<=n;i++){
		int now=i;
		if(go>now&&qz>=now) now=go;
		//cout<<now<<endl;
		for(;now<=n;now++){
			num[arr[now]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<num[i]<<" ";
	}
	//anthropic openai保佑我 
	//fable 5 gpt-6-astra保佑我 
	return 0;
}
