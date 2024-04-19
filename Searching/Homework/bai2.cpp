#include <iostream>
#include<algorithm>

#define MAX 1e9; 
#define PI 3.14;

using namespace std;

void in(int a[], int n){
   cout << "Mang vua nhap : ";
   for(int i = 0; i < n; i++){
      cout << a[i] << " ";
   }
}

void NeareastX(int a[],int x,int n){
	int min_diff=abs(a[0]-x);
	int neareast=0;
	for(int i=1;i<n;i++){
		if(abs(a[i]-x)<min_diff){
			min_diff=abs(a[i]-x);
			neareast=i;
		}
	}
	cout << a[neareast];
}

int main(){
	int a[]={45,23,76,22,72,55,12,98};
	int x=1;
	sort(a,a+(sizeof(a)/sizeof(a[0])));
	in(a,sizeof(a)/sizeof(a[0]));
	cout << endl;
	NeareastX(a,x,sizeof(a)/sizeof(a[0]));
	cout << endl;
	return 0;
}