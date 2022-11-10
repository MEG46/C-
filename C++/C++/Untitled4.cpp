#include <iostream>
using namespace std;
void Calc(int num){
    int i=0;
    int arr[64];
    int j=0;
    while(num>0){
    arr[j]=(num%2);
    num=num/2;
    j++;
}
for(j=j-1;j>=0;j--){
    cout << arr[j];
} 
}
int main() {
   int num;
   cout << "Please enter a number : ";
   cin >> num;
   Calc(num);

    return 0;
}