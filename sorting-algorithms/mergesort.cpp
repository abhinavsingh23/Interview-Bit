#include <bits/stdc++.h> 
using namespace std;
#include <iostream>
#include<stdio.h>

void merge(int *Arr_l,int *Arr_r, int *Arr, int nl,int nr,int n){
	

	int i,j,k;
	i=0;
	j=0;
	k=0;
	

	while(i<nl && j<nr){
		if(Arr_l[i]<Arr_r[j]){
			Arr[k]=Arr_l[i];
			i=i+1;
			k=k+1;
		}
		if(Arr_l[i]>Arr_r[j]){
			Arr[k]=Arr_r[j];
			j=j+1;
			k=k+1;
		}
		if(Arr_l[i]==Arr_r[j]){
			Arr[k]=Arr_r[j];
			Arr[k+1]=Arr_l[i];
			i++;
			j++;
			k=k+2;
		}
	}

	while(i<nl){
		Arr[k]=Arr_l[i];
		i++;		
		k++;
	}
	while(j<nl){
		Arr[k]=Arr_r[j];
		j++;
		k++;
	}

}


void mergesort(int Arr[] ,int n){

	int i;
	if(n<2){

		return ;
	}
	
	int nl= n/2;
	int nr= n-nl;
	int Arr_r[nr];
	int Arr_l[nl];


	for(i=0;i<nl;i++){
		Arr_l[i]=Arr[i];
	}

	for(i=0;i<nr;i++){
		Arr_r[i]=Arr[nl+i];
	}
	mergesort(Arr_l,nl);
	mergesort(Arr_r,nr);
	merge(Arr_l,Arr_r,Arr,nl,nr,n);

	
	
	

}

int main(){

	int n;
	cin >> n;
	
	int i;
	int Arr[n];
	for(i=0;i<n;i++){
		cin >> Arr[i];
	}
	
	mergesort(Arr,n);

	for(i=0;i<n;i++){
		cout << Arr[i] << " ";
	}
	cout << endl;
	return 0;	

}


