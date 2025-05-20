#include <iostream>
using namespace std;
int linear(int a[], int element,int size){
    for (int i = 0;i<size;i++){
        if(a[i]== element){
            return i;
        }
    }
    return -1;
}
int main(){
    int a [5]={1,2,3,4,5};
    int q =linear(a,3,5);
    cout<<q;
    return 0;
}