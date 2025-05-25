# include <iostream>
using namespace std;
void Insertion_Sort(int arr[],int n){
        for (int i = 1; i < n; ++i) {
            int key = arr[i];
            int j = i - 1;

            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    for (int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int a [15]={4,6,7,0,44,55,12,3,5,99,1,33,88,444,33324};
    Insertion_Sort(a,15);
}
