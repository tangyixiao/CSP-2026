#include<iostream>
using namespace std;
int n,m;
int cmt=0;
int main(){
	cin>>n>>m;
	int a[n],cnt[10000],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=n-1;j=cmt;i--){
			for(int k=i;k<j;k++){
				if(a[k]==a[j]){
					for(int q=i;q<k+1;q++){
						a[q]=0;
					}
				} 
			}
		} 
		cmt++;
		for(int j=0;j<n;j++){
			cnt[a[j]]++;
		}
		for(int j=0;j<n;j++)
		{
			//cout<<a[j]<<'j';
			a[j]=b[j];
		}
	} 
	for(int i=0;i<m+1;i++){
		if(cnt[i]!=0) cout<<cnt[i];
	}
	return 0;
}
