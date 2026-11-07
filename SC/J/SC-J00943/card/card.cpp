#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int res[300005];
int v[300005];
int q[500005];
int tot=0;
int main(){	
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	for(int g=1;g<=n;++g){
		//cout<<"当前是第"<<g<<"局"<<endl; 
		memset(v,0,sizeof v);
		memset(q,0,sizeof q);
		tot=0;
		for(int i=g;i<=n;++i){
			//cout<<tot<<" 当前牌库分布如下："<<endl;
			/*for(int d=1;d<=tot;++d){
				cout<<q[d]<<" ";
			}cout<<endl;
			cout<<"摸出第"<<i<<"张牌，其大小为"<<a[i]<<endl; */
			if(v[a[i]]==0){
				//cout<<"手牌库内没有这张牌，放在最右侧";
				tot++;
		    	q[tot]=a[i];
		    	//cout<<a[i]<<" "<<q[tot]<<endl;
	    		v[a[i]]++;
			}else{
				//cout<<"手牌库内有这张牌，其位置在";
				int cnt=tot;
				while(q[cnt]!=a[i]){
					cnt--;
				}
				//cout<<cnt<<"，大小为"<<q[i]<<endl;
				for(int j=cnt;j<=tot;++j){
					//cout<<"收走位于"<<j<<"的"<<q[j]<<endl; 
					v[q[j]]--;q[j]=0;
				}
				tot=cnt;
				q[tot]=a[i];
				v[a[i]]++;
			}
		}
		for(int i=tot;i>=1;--i){
			if(q[i]==0){
				//cout<<"已经没有牌了，退出"<<endl;
				break;
			}
			res[q[i]]++;
			//cout<<"库内第"<<i<<"个牌为"<<q[i]<<endl; 
		}
	}
	for(int i=1;i<=m;++i){
		cout<<res[i]<<" ";
	}
	cout<<endl;
	return 0;
}
//4 3 1 2 1 3
//10 3 3 1 2 1 3 2 3 1 2 1