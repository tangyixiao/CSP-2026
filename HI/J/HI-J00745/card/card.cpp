#include<bits/stdc++.h>
using namespace std;



int main(){
	freopen ("card.in","r",stdin);
	freopen ("card.out","w",stdin);
	int h,w;
	
	cin>>h>>w;
	int a[500005],b[500005],d[300005];
	bool c[300005];
	
	for(int i=1;i<=h;i++){
		cin>>a[i];
	}
	for(int i=1;i<=h;i++){
		for(int j=i;j<=h;j++){
			if(c[a[j]]==false){
				c[a[j]]==true;
				b[j]=a[j];
			}else{
				for(int q=1;q<=j;q++){
					c[q]=false;
					b[i]=0;
				}
			}
		}
		for(int j=1;j<=h;j++){
			if(b[j]==0){
				break;
			}else{
				if(b[j]==i){
					d[j]++;
					break;
				}
			}
		}
	}
	for(int i=1;i<=w;i++){
		cout<<d[i]<<" ";
	}
	return 0;
}
