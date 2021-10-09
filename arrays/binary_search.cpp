#include <iostream>

using namespace std;


int binary_search(int *arr, int n, int k) {

    int start = 0;
    int end = n -1;

    while(start < end) {
        int mid = (start + end) /2;

        if(arr[mid] == k) {
            return mid;
        } else if(arr[mid] < k) {
            end = mid -1;
        } else {
            start = start + 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {10,15,12,9,6,4,3,10,8};
	int n = sizeof(arr) / sizeof(int);

	int key;
    cout << "Enter the number you want to search in the list" << endl;
	cin>>key;

	int index = binary_search(arr,n,key);
	if(index!=-1){
		cout<<key << " is present at index " << index <<endl;
	}
	else{
		cout<<key << " is not found in ther list" << endl;
	}

    return 0;


}