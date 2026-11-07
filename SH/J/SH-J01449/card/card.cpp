#include<bits/stdc++.h>
using namespace std;
int a[500005],cnt[300005];//loc[i]->i数字的上一个位置,locat[i]->i位置上的数字 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int k=0;k<n;k++){
		int cnot[m]{0},loc[m]{0},locat[n]{m};
		for(int l=1;l<=m;l++)loc[l]=0,cnot[l]=0;
		for(int l=0;l<n;l++)locat[l]=0;
		for(int i=k;i<n;i++){
			cnot[a[i]]++;
			locat[i]=a[i];
			if(cnot[a[i]]>1){
				for(int j=loc[i];j<=i;j++){
					//cnt[locat[j]]-=(j-loc[i]);
					cnot[locat[j]]--;
					//cout<<"073399"<<endl;
				}
			}
			loc[a[i]]=i;
		}
		for(int i=1;i<=m;i++)cnt[i]+=cnot[i];
		//for(int l=1;l<=m;l++)cout<<cnot[l]<<" ";
		//cout<<endl;
	}
	for(int i=1;i<=m;i++)cout<<cnt[i]<<" ";
	return 0;
} 
