
// Contributer - Ajit Varpe 
// Follow  me on Github https://github.com/AjitVarpe


#include <bits/stdc++.h>
#include<climits>
using namespace std;
int BinarySearch(int arr[],int n,int key){
	int s=0;
	int e=n;
	while(s<=e){
		int mid = s + (e - s) / 2; //To avoid overflow of 32 bit systems we use s + (s-e) / 2 not (s+e)/2 


		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]>key){
			e=mid-1;
		}else
		{
			s=mid+1;
		}
	}
	return -1;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cin>>key;
	cout<<BinarySearch(arr,n,key);
	return 0;
}
