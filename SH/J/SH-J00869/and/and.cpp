#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		int e=a[0];
		for(int j=1;j<n;j++){
			if(a[j]>e){
				e=a[j];
			}
		}
		b[i]=e;
		for(int j=0;j<n;j++){
			if(a[j]==e){
				a[j]=0;
			}
		}
		e=0;
	}
	int cnt=0;
	for(int i=0;i<m;i++)
	{
		int v=b[i];
		b[i]=0;
		while(v){
			b[i]+=v%2;
			b[i]*=10;
			cnt++;
			v/=2; 
		 }
	}
	
	int o=1;
	for(int i=0;i<m;i++){
		int o=o&b[i];
	}
	o=b[m-1];
	for(int i=m-2;i>=0;i--)
	{
		o&=b[i];
	}
	int tnt=0;
	for(int i=0;i<=cnt;i++){
		tnt+=pow(o%10,i)*2;
		o/=10;
	}
	cout<<tnt;
	return 0;
} 
