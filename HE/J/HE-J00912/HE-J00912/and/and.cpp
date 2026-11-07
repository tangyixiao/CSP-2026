#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int m,n;

int ans;
struct T{
	int num;
	string sss;
	int num1;
	int numof1;
};
T a[200005];
bool cmp(T a,T b){
	return a.numof1>b.numof1;
}
int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	string tmp="";
	int tmp1;
	for(int i=1;i<=n;i++){
		cin>>a[i].sss;
		//cout<<a[i]<<endl;
		a[i].num=stoi(a[i].sss);
		a[i].num1=a[i].num;
		while(a[i].num!=0){
			tmp+=to_string(a[i].num%2);
			a[i].num=a[i].num>>1;
			//cout<<2;
		}
		a[i].sss="";
		for(int j=tmp.size()-1;j>=0;j--){
			a[i].sss+=tmp[j];
			if(tmp[j]=='1'){
				a[i].numof1+=1;
			}
		}
		tmp="";
	}
	
	sort(a+1,a+n+1,cmp);

	ans=a[1].num1;
	for(int i=1;i<=m;i++){
		ans=ans&a[i].num1;
	}
	cout<<ans;

	return 0;
}
