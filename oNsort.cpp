/*
hello guys this is a sorting Algorithms with n+k complexity where n is size and k is max element.
efficient where max value is less
faster than n log n sorting algos.
*/


#include <iostream>
#include <climits>
using namespace std;
void oNsort(int arr[],int size){
	//finding maximum element of array
	int max=INT_MIN;
	for(int i=0;i<size;i++)if(arr[i]>max)max=arr[i];
	
	
//hashing it
int * poshhash = new int[max+1]();
	for(int i=0;i<size;i++){
		poshhash[arr[i]]++;
	}
//assigning and print
	int j=0;
	for(int i=0;i<=max;i++){
		int count;
		if(poshhash[i]){
			if(poshhash[i]>1){
				count = poshhash[i];
				checkpoint:
				arr[j++]=i;
				cout<<arr[j-1]<<" ";
				count--;
				if(count)goto checkpoint;
				}
				else{
		arr[j++]=i;
		cout<<arr[j-1]<<" ";
				}
		
		}
}
}
int main(int argc, char *argv[])
{
	int arr[5]= {7,2,3,7,1};
	oNsort(arr,5);
}