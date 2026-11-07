#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
queue<int> q;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	// & and
	int lim=0;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		q.push(x);
		lim=max(lim,int(log2(x)));
		//31 -> 11111 -> 5
	}
	int w=pow(2,lim);//2^5-1 -> 16
	int o1=-1,o2=-1;
	
	int now_elem=n;//xian zai you ji ge za yu?
	int round=1;
	while(q.size()>m){
				//cout<<"Round "<<round<<"  "<<w<<'\n';
		queue<int> dele;//xiao hui dui lie
		int now_elems=now_elem;
		for(int i=1;i<=now_elems;i++){
			int a=q.front();//qu chu di yi ge shu
			q.pop();
			if(a/w%2==0){// 666,ni zui gao wei ye mei you,gun yi bian qu
				dele.push(a);//zhun bei
						//cout<<"nooooo "<<a<<" is ready to diediedie\n";
				now_elem--;//shao le yi ge
			}else{//gong xi ru wei zui gao wei
						//cout<<"yeeees "<<a<<" is rank upupup\n";
				q.push(a);//jin ru xia yi lun
			}
		}
		if(q.size()<m){//zhi you yi ge zhao shei pei?
			while(!dele.empty()){
				int a=dele.front();
				q.push(a);//ni men kuai hei lai!
				dele.pop();
						//cout<<"whaaat "<<a<<" is respawn\n";
				now_elem++;//fu huo le?
			}
		}else{
			while(!dele.empty()){
				int a=dele.front();
						//cout<<"nooooo "<<a<<" is diediedie reason pass\n";
				dele.pop();//zhi jie xiao hui!
			}
		}
		w/=2;//xia yi lun xuan ba: 2^w-1 shi fuo wei 1!
		if(w<=0){//666,bi sai jie shu le hai you zhe me duo ren?
			while(q.size()>m){//execute(duo yu de ren);
				int a=q.front();
						//cout<<"nooooo "<<a<<" is diediedie reason execute\n";
				q.pop();
			}
			break;
		}
		round++;
	}
	int man=q.front();
	q.pop();
			//cout<<man<<' ';
	while(!q.empty()){
		int female=q.front();
		q.pop();
		man=man&female;//sui xin pei?
				//cout<<female<<' ';
	}
	//cout<<"\n";
	cout<<man;	
	return 0;
}