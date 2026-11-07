#include<bits/stdc++.h>
using namespace std;
int a[500010],b[500010];
struct node{
	int lp,cnt;
}cnt[300010]; 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i,index=0;j<n;j++,index++){
			//cout<<j<<" "<<a[j]<<endl;
			if(cnt[a[j]].cnt>0){
				//cout<<cnt[a[j]].lp<<" lp "<<a[j]<<endl;
				for(int k=cnt[a[j]].lp;k<index;k++){
					//cout<<"del:"<<b[k]<<endl;
					b[k] = 0;
					cnt[b[k]].cnt--;
					index = cnt[b[k]].lp;
				}
			}
			b[index] = a[j];
			cnt[a[j]].lp = index;
			cnt[a[j]].cnt++;
			//cout<<"index"<<index<<endl;
			//for(int k=0;k<n;k++) cout<<b[k]<<" ";
			//cout<<endl;
		}
	}
	
	
	for(int i=0;i<m;i++){
		cout<<cnt[i].cnt<<" ";
	}
	
	return 0;
}


