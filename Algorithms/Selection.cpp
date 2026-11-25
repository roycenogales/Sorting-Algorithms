#include <ctime>
#include <random>
#include <iostream>
using namespace std;

const int N = 10;

void Swap(int *A, int x, int y){
  int z = A[x];
  A[x] = A[y];
  A[y] = z;
}

void SelectionSort(int *A, int n){
  int minIndex;
  int sortedIndex = 0;

  while(sortedIndex < n){
    minIndex = sortedIndex;
    for(int i = sortedIndex; i < n; i++){
      if(A[i] < A[minIndex]){minIndex = i;}
    }
    Swap(A, sortedIndex, minIndex);
    sortedIndex++;
  }
  return;
}

int main(){
  int A[N];

  for(int i = 0; i < N; i++){
    A[i] = N-i;
    printf("A[%d] = %d\n", i, A[i]);
  }

  //Swap(A, 0, 5);
  //printf("A[0], A[5] == %d, %d\n", A[0], A[5]);
  SelectionSort(A, N);
  for(int i = 0; i < N; i++){
    printf("A[%d] == %d\n", i, A[i]);
  }
  return 0;
}
