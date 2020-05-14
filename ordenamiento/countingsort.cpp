// Counting sort
#include <iostream>
using namespace std;

void countingSort(int A[], int n) {
  int output[10];
  int count[10];
  int max = A[0];
  for (int i = 1; i < n; i++) {
    if (A[i] > max)
      max = A[i];
  }
  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }
  for (int i = 0; i < n; i++) {
    count[A[i]]++;
  }
  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }
  for (int i = n - 1; i >= 0; i--) {
    output[count[A[i]] - 1] = A[i];
    count[A[i]]--;
  }
  for (int i = 0; i < n; i++) {
    A[i] = output[i];
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
    countingSort(A, n);
    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) {
            cout << A[i] << " ";
    }
}
