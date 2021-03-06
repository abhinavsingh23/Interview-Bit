#include <bits/stdc++.h> 
using namespace std; 
#include <iostream>


int partition(int Arr[], int start, int end){
	
	int pivot= Arr[end];
	int index= start;	
	int i;	

	for(i=start;i<end;i++){
		if(Arr[i]<=pivot){
			swap(Arr[i], Arr[index]);
			index=index+1;
		}

	}	

	swap(Arr[index], Arr[end]);	
	return index;
} 

void quicksort(int Arr[], int start, int end){

	if(start<end){
		int p;	
		p=partition(Arr,start,end);
		quicksort(Arr,start,p-1);
		quicksort(Arr,p+1,end);
	}
}

int main(){
	
	int n;
	cin >> n;
	
	int Arr[n];
	int i;
	for(i=0;i<n;i++){
		cin >> Arr[i];
	}

	quicksort(Arr,0,n-1);	
	int j;
	for(j=0;j<n;j++){
		cout << Arr[j] << "\n";
	}

	return 0;

 }
