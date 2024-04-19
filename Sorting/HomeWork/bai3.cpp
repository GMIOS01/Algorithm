#include <iostream>

using namespace std;

void MergeSort(int a[],int n, int b[], int m,int c[]){
	int index_a=0,index_b=m-1,index_c=0;
	while(index_a < n and index_b >= 0){
		if(a[index_a]<=b[index_b]){
			c[index_c++]=a[index_a++];
		}
		else c[index_c++]=b[index_b--];
	}
	while(index_a<n){
		c[index_c++]=a[index_a++];
	}
	while(index_b>0){
		c[index_c++]=a[index_b--];
	}
}

void nhap(int a[], int n){
   	for(int i = 0; i < n; i++){
      	cin >> a[i];
    }
}

void in(int a[], int n){
   	cout << "Mang vua nhap : ";
   	for(int i = 0; i < n; i++){
      	cout << a[i] << " ";
  	}
}

int main(){
	int n,m;
	cin >> n >> m;
	int a[n],b[m],c[m+n];
	nhap(a,n);
	nhap(b,m);
	in(a,n);
	cout << endl;
	in(b,m);
	MergeSort(a,n,b,m,c);
	cout << endl;
	in(c,m+n);
	cout << endl;
	return 0;
}