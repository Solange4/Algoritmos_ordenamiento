//Selection sort
#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int A[], int n) {
  for (int step = 0; step < n-1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < n; i++) {
        if (A[i] < A[min_idx])
            min_idx = i;
    }
    swap(&A[min_idx], &A[step]);
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
    selectionSort(A, n);
    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) {
            cout << A[i] << " ";
    }
}
