#include<bits/stdc++.h>
using namespace std;
int a[200010][3];
char m,j;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		char y;
		cin>>x>>y;
		a[i][1]=x;
		a[i][2]=(int)y;
	}
	int l=1,r=n;
	long long int sum=0;
	while(l<=r){
		if(a[l][1]<a[r][1]){
			if(a[l][2]==a[r][2]){
				a[r][1]-=a[l][1];
				l++;
			}
			else{
				sum+=a[l][1];
				a[r][1]-=a[l][1];
				l++;
			}
		}
		else if(a[l][1]==a[r][1]){
			if(a[l][2]==a[r][2]){
				l++;
				r--;
			}
			else{
				sum+=a[l][1];
				l++;
				r--; 
			}
		}
		else{
			if(a[l][2]==a[r][2]){
				a[l][1]-=a[r][1];
				r--;
			}
			else{
				sum+=a[r][1];
				a[l][1]-=a[r][1];
				r--;
			}
		}
	}
	cout<<sum;
	return 0;
}
