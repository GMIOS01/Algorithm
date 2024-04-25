#include <iostream>

using namespace std;

int partition(int arr[],int low,int high)
{
  
  int pivot=arr[high];
  int i=(low-1);
  for(int j=low;j<=high;j++)
  { 
    if(arr[j]<pivot)
    {
      i++;
      swap(arr[i],arr[j]);
    }
  }
  swap(arr[i+1],arr[high]);
  return (i+1);
}
           
void quickSort(int arr[],int low,int high)
{
  if(low<high)
  {
    int pi=partition(arr,low,high);
    cout << pi;
    quickSort(arr,low,pi-1);
    quickSort(arr,pi+1,high);
  }
}

void in(int a[], int n){
  cout << "Mang vua nhap : ";
  for(int i = 0; i < n; i++){
    cout << a[i] << " ";
  }
}

int main(){
	int array[8]={6,1,2,7,8,4,3,5};	
	in(array,sizeof(array)/sizeof(array[0]));
	quickSort(array,0,sizeof(array)/sizeof(array[0]));
	cout << endl;
	in(array,sizeof(array)/sizeof(array[0]));
	cout << endl;
	return 0;
}