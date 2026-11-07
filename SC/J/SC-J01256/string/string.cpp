#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
struct node{
	long long number;
	char ch;
}a[N];
long long n,k=1;
long long cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].number >>a[i].ch ;
	}
	
	for(int i=1;i<n-i+k;i++){
		if(a[i].ch !=a[n-i+k].ch ){
			if(a[i].number >a[n-i+k].number ){
				cnt+=a[n-i+k].number; 
				a[i].number -=a[n-i+k].number ;
				k--;
				i--;
			}else if(a[i].number <a[n-i+k].number){
				cnt+=a[i].number;
				a[n-i+k].number -=a[i].number;
				k++; 
			}else{
				cnt+=a[i].number ;
			} 
		}else{
			if(a[i].number >a[n-i+k].number ){
				a[i].number -=a[n-i+k].number ;
				k--;
				i--;
			}else if(a[i].number <a[n-i+k].number){
				a[n-i+k].number -=a[i].number;
				k++; 
			}else{
				continue;
			} 
		}
	}
	cout<<cnt;
	return 0;
}
