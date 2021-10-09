#include <iostream>

using namespace std;


int linear_search(int *arr, int n, int k) {
    for(int i =0; i<n;i++) {
        if(arr[i] == k) {
            return i;
        }
    }
    return -1;
}

int main(){

    int arr[] = {10,15,12,9,6,4,3,10,8};
	int n = sizeof(arr) / sizeof(int);

	int key;
    cout << "Enter the number you want to search in the list" << endl;

	cin>>key;

	int index = linear_search(arr,n,key);
	if(index!=-1){
		cout<<key << " is present at index " << index <<endl;
	}
	else{
		cout<<key << " is not found in ther list" << endl;
	}

    return 0;

}