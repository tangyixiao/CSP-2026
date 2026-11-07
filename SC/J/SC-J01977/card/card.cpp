#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],ma[500010],ans[500010],s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	} 
	for(int i=1;i<=n;i++){
		map<int,int>mb;
		for(int j=i;j<=n;j++){
			if(mb[a[j]]!=0){
				//cout<<"[第"<<i<<"轮]清除区间["<<mb[a[j]]<<","<<j<<")\n"; 
				for(int l=mb[a[j]];l<j;l++)mb[a[l]]=0;
				ma[mb[a[j]]]--;
				ma[j]++;
			}
			mb[a[j]]=j;
		} 
		s=0;
//		for(int j=i;j<=n;j++){
////			s+=ma[j];
////			if(s==0){
////				cout<<"[第"<<i<<"轮]存在"<<a[j]<<endl; 
////				ans[a[j]]++;
////			}
//		}	
		for(int j=1;j<=m;j++){	
			if(mb[j]!=0){
				ans[j]++;
				//cout<<"[第"<<i<<"轮]存在"<<j<<endl; 
			}
		} 
		if(i!=n)memset(ma,0,sizeof(ma));
	} 
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}
/*
10 3 3 1 2 1 3 2 3 1 2 1
*/