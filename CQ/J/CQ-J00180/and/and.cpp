#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int brr[100005];
string t[100005];
int c=0;
void s(int n,int m){
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			brr[i]=arr[i]&arr[j];
			if(m==0){
				if(brr[i]>=c){
					c=brr[i];
				}
			}
		}
	}
	if(m==0){
		return;
	}
	m-=1;
	s(n,m);
}
int main(){
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	int n,m,c=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	s(n,m);
	cout<<c;
	
	return 0;
} 
