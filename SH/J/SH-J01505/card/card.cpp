#include<bits/stdc++.h>
using namespace std;
int m,n;
int a[100009],ca[100009],ans[10009];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
	cin>>a[i];
	ca[i]=a[i];
	ans[i]=0;
	}
	for(int p=0;p<n;p++){
	for(int i=0;i<n;i++)
	ca[i]=a[i];
	for(int i=p;i<n;i++)
		for(int j=i+1;j<n;j++){
			if(ca[i]==ca[j]) for(int q=i+1;q<=j;q++)ca[q]=ca[j+q-i];
		}
		for(int i=p;i<n;i++)
		for(int j=1;j<=m;j++){
			if(ca[i]==j)ans[j]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}
