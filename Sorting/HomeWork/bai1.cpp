#include <iostream>

using namespace std;

void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout << a[i] << "    ";
	}
}

int main(){
	int a[]={0,1,0,1,1,0,0,1};
	int k=0;
	for(int i=0;i<(int)(sizeof(a)/sizeof(a[0]));i++){
		if(a[i]==0){
			swap(a[i],a[k++]);
		}
	}
	print(a,sizeof(a)/sizeof(a[0]));
	cout << endl;
	return 0;
}