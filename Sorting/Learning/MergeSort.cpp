#include <iostream>

using namespace std;

void merge(int arr[], int l, int m, int r) {
  // Tạo hai mảng tạm thời để lưu trữ các phần tử của hai mảng con
  int left[m - l + 1], right[r - m];

  // Sao chép các phần tử của mảng con trái vào mảng tạm thời left
  for (int i = 0; i < m - l + 1; i++) {
    left[i] = arr[l + i];
  }

  // Sao chép các phần tử của mảng con phải vào mảng tạm thời right
  for (int i = 0; i < r - m; i++) {
    right[i] = arr[m + 1 + i];
  }

  // Khai báo các biến để theo dõi vị trí hiện tại trong mỗi mảng
  int i = 0, j = 0, k = l;

  // So sánh các phần tử của hai mảng tạm thời và hợp nhất chúng vào mảng ban đầu
  while (i < m - l + 1 && j < r - m) {
    if (left[i] <= right[j]) {
      arr[k] = left[i];
      i++;
    } else {
      arr[k] = right[j];
      j++;
    }
    k++;
  }

  // Sao chép các phần tử còn lại của mảng tạm thời left (nếu có) vào mảng ban đầu
  while (i < m - l + 1) {
    arr[k] = left[i];
    i++;
    k++;
  }

  // Sao chép các phần tử còn lại của mảng tạm thời right (nếu có) vào mảng ban đầu
  while (j < r - m) {
    arr[k] = right[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    int m = (l+r) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    merge(arr, l, m, r);
  }
}

int main() {
  // Khai báo và khởi tạo mảng
  int arr[] = {5, 2, 4, 1, 3,23,67,34,1,5,7,9,23,54};
  int n = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  mergeSort(arr, 0, n - 1);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
