#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,7> a = {0,1,2,0,2,1,2};  //array declared in the template present in std:array header file
    int low=0,mid=0,high=a.size()-1;
    while (mid<=high){
        if (a[mid] == 0){
            swap(a[low],a[mid]);
            mid++;
            low++;
        }
        else if (a[mid] == 1){
            mid++;
        }
        else{
            swap(a[mid],a[high]);
            high--;
        }
    }
    for (int i=0;i<a.size();i++){
        cout << a[i]<<" ";
    }
}