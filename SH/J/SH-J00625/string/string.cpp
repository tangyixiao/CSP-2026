#include <iostream>
#include <string>
using namespace std;
int l,r;
long long ans;
int n;
struct a{
	long long x;
	char y;
}b[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>b[i].x;
		cin>>b[i].y;
	}
	r=n-1;
	while(l<r){
		if(b[l].x>b[r].x){
			if(b[l].y==b[r].y){
				b[l].x-=b[r].x;
			}
			else{
				ans+=b[r].x;
				b[l].x-=b[r].x;
			}
			r--;
		}
		else if(b[l].x==b[r].x){
			if(b[l].y!=b[r].y){
				ans+=b[l].x;
			}
			l++;r--;
		}
		else{
			if(b[l].y==b[r].y){
				b[r].x-=b[l].x;
			}
			else{
				ans+=b[l].x;
				b[r].x-=b[l].x;
			}
			l++;
			
		}
	}
	cout<<ans;
	return 0;	
}
