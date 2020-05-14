// Merge sort
#include <iostream>
using namespace std;

void merge(int A[], int p, int q, int r) {
  int n1 = q - p + 1;
  int n2 = r - q;
  int L[n1], M[n2];
  for (int i = 0; i < n1; i++)
    L[i] = A[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = A[q + 1 + j];
  int i, j, k;
  i = 0;
  j = 0;
  k = p;
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      A[k] = L[i];
      i++;
    } else {
      A[k] = M[j];
      j++;
    }
    k++;
  }
  while (i < n1) {
    A[k] = L[i];
    i++;
    k++;
  }
  while (j < n2) {
    A[k] = M[j];
    j++;
    k++;
  }
}

void mergeSort(int A[], int l, int r) {
  if (l < r) {
    int m = l + (r - l) / 2;
    mergeSort(A, l, m);
    mergeSort(A, m + 1, r);
    merge(A, l, m, r);
  }
}

int main() {
  int n;
    cout<<"Ingresar cantidad de numeros: ";
    cin>>n;
    int A[n];
    for (int i=0;i<n;i++){
        cout<<"Ingresar numero "<<i+1<<" :";
        cin>>A[i];
    }
    cout<<"El arreglo es: ";
    for (int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    mergeSort(A,0,n-1);
    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) {
            cout << A[i] << " ";
    }
}
