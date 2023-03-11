#include <iostream>
using namespace std;

void rotate(int a[], int size);
int main() {
  int size=5;
  int a[5]={1,2,3,4,5};
  rotate(a, size);

}
void rotate(int a[], int size){
  int temp=a[0];
  for(int i=0; i<size; i++){
      a[i]=a[i+1];
      a[size-1]=temp;
    cout<<"\n"<<a[i];
  }
  
}