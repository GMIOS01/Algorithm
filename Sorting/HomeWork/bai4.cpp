#include <iostream>

using namespace std;

void heapify(int a[],int n,int i){
  int largest = i;
  int left = 2*i+1;
  int right =2*i+2;
  if(left < n and a[left]>a[largest]){
    largest=left;
  }
  if(right < n and a[right]>a[largest]){
    largest=right;
  }
  if(largest!=i){
    swap(a[i],a[largest]);
    heapify(a,n,largest);
  }
}

void heapSort(int a[], int n)
{
  for (int i = n / 2 - 1; i >= 0; i--)
    heapify(a, n, i);
  for (int i = n - 1; i > 0; i--) {
    swap(a[0], a[i]);
    heapify(a, i, 0);
  }
}

int main(){
  int a[]={7,3,9,2,8,1,6,4,5};
  int n=sizeof(a)/sizeof(a[0]);
  int k=4;
  heapSort(a,n);
  cout << a[k]<< endl;
  cout << n << endl;
  return 0;
}