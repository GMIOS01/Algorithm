#include <iostream>

using namespace std;

bool search (int a[],int n){
	int x=a[n/2];
	int count1=0;int count2=0;
	for(int i=0;i<n;i++){
		if(a[i]<x){
			count1++;
		}
		if(a[i]>x){
			count2++;
		}
	}
	if(count1 <= n/2 and count2 <= n/2){
		return true;
	}
	return false;
}

int main(){
	//int a[]={1,2,3,4,5,6,7,8,9};
	int a[]={1,2,3,4,5,6,7,8,9,10,11};
	if(search(a,sizeof(a)/sizeof(a[0]))) {
		cout << "co phan tu" << endl;
	}else cout << "ko co" << endl;
	return 0;
}