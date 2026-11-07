#include<bits/stdc++.h>
using namespace std;
struct pic{
	long long nm;
	char c;
};
pic pics[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;long long ch=0;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>pics[i].nm>>pics[i].c;
	int pt1=0,pt2=n-1;
	while(pt1<pt2){
		if(pics[pt1].c!=pics[pt2].c)
			ch+=min(pics[pt1].nm,pics[pt2].nm);
		if(pics[pt1].nm<pics[pt2].nm){
			pics[pt2].nm-=pics[pt1].nm;pt1++;
		}else if(pics[pt1].nm>pics[pt2].nm){
				  pics[pt1].nm-=pics[pt2].nm;pt2--;
			  }else{
			  	  pt1++;pt2--;
			  }
	}
	cout<<ch;
	return 0;
}