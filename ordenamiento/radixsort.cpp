//Radix Sort
#include <iostream>
using namespace std;

int getMax(int A[], int n) {
  int maximum = A[0];
  for (int i = 1; i < n; i++)
    if (A[i] > maximum)
      maximum = A[i];
  return maximum;
}
void countingSort(int A[], int n, int place) {
  const int max = 10;
  int output[n];
  int count[max];
  for (int i = 0; i < max; ++i)
    count[i] = 0;
  for (int i = 0; i < n; i++)
    count[(A[i] / place) % 10]++;
  for (int i = 1; i < max; i++)
    count[i] += count[i - 1];
  for (int i = n-1; i >= 0; i--) {
    output[count[(A[i] / place) % 10] - 1] = A[i];
    count[(A[i] / place) % 10]--;
  }
  for (int i = 0; i < n; i++)
    A[i] = output[i];
}

void radixsort(int array[], int size) {
  int max = getMax(array, size);
  for (int place = 1; max / place > 0; place *= 10)
    countingSort(array, size, place);
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
    radixsort(A, n);
    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) {
            cout << A[i] << " ";
    }
}
