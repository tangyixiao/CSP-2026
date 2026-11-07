#include<bits/stdc++.h>
using namespace std;
int n=0,m=0,zhongji[300000];
void search(int i,int a[],int b[],int num){
	if(i<n){
		if(b[a[i]-1]!=0){
		    for(int p=0;p<m;p++){
			    if(b[p]>b[a[i]-1]){
				    b[p]=0; 
			    }
		    }
	     	num=b[a[i]-1];
	    }
	    else {
	        b[a[i]-1]=num;
	    }
	    search(++i,a,b,++num);
	}
	else {
	    for(int q=0;q<m;q++){
			if(b[q]!=0) zhongji[q]++;
			b[q]=0;
	    }
    }
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	memset(zhongji,0,sizeof(zhongji));
	int a[n]={0},b[m]={0};
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) {
	    search(i,a,b,1);
	}
	for(int i=0;i<m;m++) cout<<zhongji[m];
	return 0;
}