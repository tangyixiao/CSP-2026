#include<bits/stdc++.h>
using namespace std;
long long f(int a,int b){
	int n=0;
	for(int i=0;i<b-2;i++){
		n+=(a-i);
	}
	return n+1;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	scanf("%d %d",&n,&m);
	vector<int>v(n);
	for(int&i:v){
		scanf("%d",&i);
	}
	if(m==1){
		int maxx=INT_MIN;
		for(auto i:v){
			maxx=i>=maxx?i:maxx;
		}
		printf("%d",maxx);
		return 0;
	}
	if(m==n){
		int num=v[0];
		for(int i=1;i<n;i++){
			num&=v[i];
		}
		printf("%d",num);
		return 0;
	}
//	if(m==2){
//		int maxx=INT_MIN;
////		vector<int>a(f(n,m),0);
//		for(int i=0;i<n;i++){
//			for(int j=i;j<n;j++){
////				cout<<int(i&j)<<endl;
//				maxx=int(i&j)>=maxx?int(i&j):maxx;
//			}
//		}
//		printf("%d",maxx);
//		return 0;
//	}
//	if(m==3){
//		int maxx=INT_MIN;
//		for(int i=0;i<n;i++){
//			for(int j=i;j<n;j++){
//				for(int k=j;k<n;k++)maxx=i&j&k>=maxx?i&j&k:maxx;
//			}
//		}
//		printf("%d",maxx);
//		return 0;
//	}
//	if(m==4){
//		int maxx=INT_MIN;
//		for(int i=0;i<n;i++){
//			for(int j=i;j<n;j++){
//				for(int k=j;k<n;k++)for(int x=k;x<n;x++)maxx=i&j&x&k>=maxx?i&j&x&k:maxx;
//			}
//		}
//		printf("%d",maxx);
//		return 0;
//	}
	sort(v.begin(),v.end());
	printf("%d",v[(v.size()-1)/2]);
	return 0;
}