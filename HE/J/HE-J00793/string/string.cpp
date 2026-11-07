#include <bits/stdc++.h> 
using namespace std;
int n;
struct node{
	long long lg;
	char zi;
};
node a[1000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].lg;
		cin>>a[i].zi;
	}
	int l=1,r=n;
	long long num=0;
	while(l<r){
		if(a[l].zi!=a[r].zi){
			if(a[l].lg<a[r].lg){
				num+=a[l].lg;
				a[r].lg-=a[l].lg;
				l++;
			}else if(a[l].lg==a[r].lg){
				num+=a[l].lg;
				l++;
				r--;
			}else{
				num+=a[r].lg;
				a[l].lg-=a[r].lg;
				r--;
			}
		}else{
			if(a[l].lg<a[r].lg){
				a[r].lg-=a[l].lg;
				l++;
			}else if(a[l].lg==a[r].lg){
				l++;
				r--;
			}else{
				a[l].lg-=a[r].lg;
				r--;
			}
		}
	}
	cout<<num;
	return 0;
}
