#include<bits/stdc++.h>
using namespace std;
struct ys{
	long long a;
	char b;
}y[200009];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string w;
	for(int i=1;i<=n;i++){
		cin>>y[i].a>>y[i].b;
		for(long long j=1;j<=y[i].a;j++){
			w+=y[i].b;
		}
	}
	long long ans=0;
	for(long long i=0;i<(w.size()+1)/2;i++){
		if(w[i]!=w[w.size()-i+1]){
			ans++;
		}
	}
	cout<<ans;
//	int l=2,r=n-1,mm=y[1].a-y[n].a;
//	long long w=0;
//	while(l!=r){
//		if(mm<=0){
//			l++;
//			if(l==r){
//				break; 
//			}
//			mm+=y[l].a;
//		}else if(mm>0){
//			r--;
//			if(l==r){
//				break; 
//			}			
//			mm-=y[r].a;
//		} 
//	}
//	cout<<l<<mm;
} 
