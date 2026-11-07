#include<bits/stdc++.h>
using namespace std;
const int N=200010;
int n,i,j;
long long a[N],ans;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	} 
	i=1,j=n;
	while(i<j){
		if(c[i]==c[j]){
			if(a[i]>a[j]){
				a[i]-=a[j];
				j--;
			}
			else if(a[i]==a[j]){
				i++;
				j--;
			}
			else {
				a[j]-=a[i];
				i++;
			}
		}
		else{
			if(a[i]>a[j]){
				a[i]-=a[j];
				ans+=a[j];
				j--;
			}
			else if(a[i]==a[j]){
				ans+=a[i];
				i++;
				j--;
			}
			else {
				ans+=a[i];
				a[j]-=a[i];
				i++;
			}
		}
	}
	cout<<ans;
	return 0;
}
/*
3
2 a
2 b
1 c

2
2 a
3 a

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/