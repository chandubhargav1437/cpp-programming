#include <iostream>
#include <vector>
using namespace std;
void selection_sort(vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
    for(auto x:arr){
        cout<<x<<" ";
    }
}
int main(){
int n;
   
    cout<<"enter the size of array"<<endl;
    cin>>n;
     vector<int> arr(n);
    cout <<"enter the elements of the array"<<endl;
    int t=n;int i=0;
    while(t--){
            int temp;
            cin>>temp;
            arr[i]=temp;
            i++;
    }
    for(auto x:arr){
        cout<<x<<" ";
        cout<<"ho"<<endl;
    }
selection_sort(arr);


}
