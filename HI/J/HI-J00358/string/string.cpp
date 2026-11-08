#include<bits/stdc++.h>
using namespace std;

int n;
struct lql{
	long long a;
	char b;
};
lql arr[200050];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i].a>>arr[i].b;
	}
	
	long long x=1,y=n,pos=0;
	while(x<=y){
		if(arr[x].b!=arr[y].b){
			if(arr[x].a<arr[y].a){
				pos+=arr[x].a;
				arr[y].a-=arr[x].a;
				x++;
			}else if(arr[x].a>arr[y].a){
				pos+=arr[y].a;
				
				arr[x].a-=arr[y].a;
				y--;
			}else if(arr[x].a==arr[y].a){
				pos+=arr[y].a;
				x++;
				y--;
			}
		}else{
			if(arr[x].a<arr[y].a){
				
				arr[y].a-=arr[x].a;
				x++;
			}else if(arr[x].a>arr[y].a){
				
				arr[x].a-=arr[y].a;
				y--;
			}else if(arr[x].a==arr[y].a){
				x++;
				y--;
			}
		}
	}
	cout<<pos;
	
	
	return 0;//Trick||Treat!
} 
