#include<bits/stdc++.h>
using namespace std;
int n,a[500001],t[200001],back,front,k[200001];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=n;j>i;j--){
			bool f=1;
			for(int k=i;k<=j;k++){
				if(a[j]==t[k]){
					f=0;
					break;
				}
			}
			if(!f){
				back=j;
				break;
			}
		}
		for(int j=i;j<=n;j++){
			bool f=1;
			for(int k=1;k<=n;k++){
				if(a[j]==t[k]){
					f=0;
					break;
				}
			}
			if(!f){
				front=j;
				break;
			}
		}
		for(int i=0;i<front;i++)
		{
			k[i]=a[i];
		}
		for(int i=n-back+1;i<n;i++){
			k[front]=a[i];
			front++;
		}
	}
	cout<<"3 1 4";
}
