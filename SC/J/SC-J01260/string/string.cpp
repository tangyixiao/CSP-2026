#include<bits/stdc++.h>
using namespace std;
long long n,a,he,o,h,hh,hhe,qhe,c,bb[200005],qe;//hhe为后面的和 
char b[200005],x;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>x;
		he+=a;
		bb[i]=a;
		b[i]=x;
	}
	x=b[1];
	for(int i=2;i<=n;i++){
		if(x!=b[i]){
			o=1;
			break;
		}
	}
	if(o==0){
		cout<<0;
		return 0;
	}
	o=0;
	if(he%2==0){
		h=he/2;
		//oo=1;
	}
	else h=he/2+1;//h为一半 
	he=0;
	for(int i=1;i<=n;i++){
		hh+=bb[i];
		//cout<<hh<<" ";
		if(h==hh){
			o=i;
			c=0;
			break;
		}
		if(h<hh){
			o=i;
			qe=hh-h;
			c=1;
			break;
		}
	}
	int ii=1;
	//cout<<h<<" "<<hh<<' '<<o<<endl;
	if(c==0){
		for(int i=o+1;i<=n;i++){
			hhe=bb[i];
			if(hhe==bb[i-ii]){
				if(b[i]==b[i-ii]){
					ii++;
					continue;
				}
				else{
					he+=bb[i-ii];
					ii++;
					//cout<<hhe<<' ';
				}
			}
			else{
				if(hhe<bb[i-1]){
					qhe=bb[i-1]-hhe;
					he+=qhe;
					ii++;
				}
			}
		}
	}
	else{
		for(int i=o;i<=n;i++){
			if(i==0){
				hhe=bb[i]-qe;
			}
			else hhe=bb[i];
			if(hhe==bb[i-ii]){
				if(b[i]==b[i-ii]){
					ii++;
					continue;
				}
				else{
					he+=bb[i-ii];
					ii++;
					//cout<<hhe<<' ';
				}
			}
			else{
				if(hhe<bb[i-1]){
					qhe=bb[i-1]-hhe;
					he+=qhe;
					ii++;
				}
			}
		}
		he--;
	}
	cout<<he;
	return 0;
} 