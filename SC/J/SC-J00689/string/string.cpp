//Sat 26/10/31 9:05 By lyc122@CSP-J/T2
#include <bits/stdc++.h>
using namespace std;
struct StringSegment{
	long long size;
	char c;
};
StringSegment str[1000002];
StringSegment str1[1000002];
long long lengthTotal;
long long segmentCnt, segmentCntnew;
long long ans; // Answer: min modification
int main(){
	// Stage 1: input
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>segmentCnt;
	for(long long i = 1; i <= segmentCnt; i++){
		StringSegment temp;
		cin>>temp.size>>temp.c;
		str[i] = temp;
		lengthTotal += temp.size;
	}
	// Stage 2: Split the medium segment -> l one & r one (make it convenient to process)
	long long indn = 0;
	for(long long i = 1; i <= segmentCnt; i++){
		if(indn + str[i].size < lengthTotal / 2) indn += str[i].size;
		else if(indn + str[i].size == lengthTotal / 2) {	// Check if there's no need to split
			for(int j = 0; j <= segmentCnt; j++){	// And copy...
				str1[j] = str[j];
			}
			segmentCntnew = segmentCnt;
			break;
		}
		else{	// Need to split, and the current $i$ is the split position (not written by artificial intelligence plz!!!)
			int nat = 0, ncur = 0;
			while(true){
				if(nat != i){
					str1[ncur] = str[nat];
					nat++;
					ncur++;
				}
				else{
					char c = str[nat].c;
					str1[ncur++] = {lengthTotal / 2 - indn, c};
					str1[ncur] = {str[nat].size - lengthTotal / 2 + indn, c};
					ncur++;
					nat++;
					segmentCntnew = segmentCnt + 1;
				}
				if(nat > segmentCnt) break;
			}
			break;
		}
	}
	long long lptr = 1, rptr = segmentCntnew;
	long long PathLength = 0;
	bool flag = false;
	long long lsize = 0, rsize = 0;
	while(true){
		if(lsize == 0) lsize = str1[lptr].size;
		if(rsize == 0) rsize = str1[rptr].size;
		long long minSize = min(lsize, rsize);
		if(PathLength + minSize > lengthTotal / 2) minSize = lengthTotal / 2 - PathLength, flag = true;
		if(lptr >= rptr) flag = true;
		if(str1[lptr].c != str1[rptr].c){
			ans += minSize; 
		}
		PathLength += minSize;
		lsize -= minSize;
		rsize -= minSize; 
		if(lsize == 0) lptr++;
		if(rsize == 0) rptr--;
		if(flag == true) break;
	}
	cout<<ans<<endl;
	return 0;
}
/*
This program is COMPLETELY written by myself.
Although, this text won't be seen by ANYONE, but i want to say...
In the last GESP-8 test of me, I found the system different(with a fullscr when doing choice)
so i pressed ESC.
But the system warned me that the event has been recorded.
Never mind, so i began to do the program-T1.
Though T2 is too difficult that i have no dare to do it,
I converted my var names in T1 to camelCase and CamelCase, making it more beautiful and professional.
But im so bored that i left the exam room after a while(submitted)
---
Then when checking my score i found it ZERO!
My mother asked why and the officer told us i used an LLM to do T1.
...
I even didn't connected to the internet or carried a USB Driver. How??? In my brain?! Then im so clever that my brain has a CUDA/ONNX runtime!
We tried to report that i didn't.
But, as i expected, no one was likely to listen to us.
Even no one asked to check the CCTV camera of the exam room.
My mom cried because the officer's altitude is bad.
And i realized that NO ONE WILL CARE ABOUT A SINGLE CANDIDATE'S FEELING, AT A COST OF CONFIRMING&CORRECTING HIS(your) MISTAKE.
I know the result of griefing in this file, so i won't. But surely im very upset and angry.
So this program is COMPLETELY normal. I'd like to hear you say "He obfuscated this using AI!"
*/