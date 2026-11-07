#include<bits/stdc++.h>
using namespace std;

const int N=200005;
int a[N];
bitset<31> b[N];

void getbit(int x,int i){
	int j=0;
	while(x){
		b[i][j]=x%2;
		x=x>>1;
		j++;
	}
	return;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i=0;i<n;i++){
		cin >> a[i];
		getbit(a[i],i);
	}
	
	
//	for(int i=0;i<n;i++){
//		for(int j=10;j>=0;j--){
//			cout << b[i][j] << ' ';
//		}
//		cout << '\n';
//	}
//	cout << "\n\n";
	
	
	int ans=0,sum=0,f;
	bool yes[N];
	for(int i=0;i<n;i++){
		yes[i]=1;
	}
	
	for(int i=30;i>=0;i--){
		sum=0;
		for(int j=0;j<n;j++){
			if(b[j][i]){
				sum++;
			}
		}
		if(sum>=m){
			f=i;
			break;
		}
	}
	
	for(int i=f;i>=0;i--){
		sum=0;
		for(int j=0;j<n;j++){
			if(yes[j]){
				if(b[j][i]){
					sum++;
				}else{
					yes[j]=0;
				}
			}
		}
		
		
//		for(int k=0;k<n;k++){
//			cout << yes[k] << ' ';
//		}
//		cout << '\n' << sum <<  '\n';
//		for(int k=0;k<n;k++){
//			cout << b[k][i] << ' ';
//		}
//		cout << "\n\n";
		
		
		if(sum>=m){
			ans+=2<<i;
		}else{
			break;
		}
	}
	cout << (ans>>1);
	return 0;
}
/*
5 3
31 3 1 15 7
*/
