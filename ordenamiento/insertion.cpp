//Insertion sort
#include <iostream>
using namespace std;

void insertionSort(int A[], int n) {
  for (int i=1; i< n; i++) {
    int key = A[i];
    int j = i - 1;
    while(key < A[j] && j>= 0){
      A[j + 1] = A[j];
      --j;
    }
    A[j + 1] = key;
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
    insertionSort(A, n);
    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) {
            cout << A[i] << " ";
    }
}

