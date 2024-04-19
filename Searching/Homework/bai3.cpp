#include <iostream>

using namespace std;

int majoritySimple (int a[],int n){
	int count;
	for(int i=0;i<n;i++){
		count=0;
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				count++;
			}
		}
		if(count >= n/2){
			return i;
		}
	}
	return -1;
}

int main(){
	//int arr[]={2,7,2,2,9,3,2,2,2,6};
	int arr[]={1,32,3,2,6,8,4,21,9};
	int index=majoritySimple(arr,sizeof(arr)/sizeof(arr[0]));
	if(index>=0) {
		cout << "so da so la:" << arr[index] << endl; 
	}else cout << "Khong ton tai"<< endl;
	return 0;
}