#include <iostream>

using namespace std;

void demx(int a[],int n,int x,int k){
	int dem=0;int idx;
	for(int i=0;i<n;i++){
		if(a[i]==x){
			dem++;
			idx=i;
		}
	}
	if(dem==k){
		cout << idx << endl;
	}else cout << "Khong co" << endl;
}

int main(){
	int a[]={1,6,2,4,1,9,4,1,5,3};
	int x=1;
	int k=3;
	demx(a,sizeof(a)/sizeof(a[0]),x,k);
	return 0;
}