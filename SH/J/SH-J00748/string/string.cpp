#include<bits/stdc++.h>
using namespace std;
struct hw{
	int nu;
	char ch;
}a[10000005];
int n,m=0,cnt=0,cn[10000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].nu>>a[i].ch;
		m+=a[i].nu;
		cn[i]=m;
	}
	for(int i=0;i<m/2;i++){
		char c1,c2;
		
		int j=-1,qq=i;
		while(1){
			if(qq>0){
				j++;
				qq=qq-cn[j];
			}
			else{
				break;
				
			}
		}
		c1=a[j].ch;
		int x=-1,qw=i;
		while(1){
			if(qw>0){
				x++;
				qw=qw-cn[x];
			}
			else{
				break;
			}
		}
		c2=a[x].ch;
		
		if(c1==c2){
			continue;
		}
		else{
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
