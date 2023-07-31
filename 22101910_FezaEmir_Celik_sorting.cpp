//
// Created by Feza on 3/12/2023.
//
/**
* Title: Algorithm analysis & Sorting
* Author : Feza Emir Çelik
* ID: 22101910
* Section : 1
* Homework : 1
* Description : description of your code
*/

#include "22101910_FezaEmir_Celik_sorting.h"

#include <iostream>
using namespace std;


void sorting::insertionSort(int *arr, const int size, int &compCount, int &moveCount) {

    int element;    //first we declare an element

    for(int i = 0; i < size; i++){  //i is the index of the element
        element = *(arr + i);   //element = arr[i]
        int j = i - 1;  //j is another index of the array for sorting the array from 0 to i

        if(*(arr + j) > element){
            compCount++;
            while(*(arr + j) > element && j>=0){    //in order for this while loop to work, arr[j] should be bigger than the element and j should be non-negative
                *(arr + j + 1)= *(arr + j); //if arr[j]>element, then it kinda moves the bigger ones to the left side
                j--;
                moveCount++;
                compCount++;    //increases the compCount
            }
            *(arr + j + 1) = element;   //after every integer bigger than the element have moved, it places the element right side to the closest smaller int to the element
            moveCount++;
        }
        else{
            compCount++;        //increases the compCount
        }
    }
}

void sorting::bubbleSort(int *arr, const int size, int &compCount, int &moveCount) {

    //int i;
    //int j;
    //int temp;
    //bool isSwapped;
    //for(int i = 0; i < size - 1; j++){
    //    isSwapped = false;
    //    while (j < size - i - 1){
    //        if (*(arr + j) > *(arr + j + 1)){
    //            temp = *(arr + j);
    //            *(arr + j) = *(arr + j + 1);
    //            *(arr + j + 1) = temp;
    //            isSwapped = true;
    //            moveCount += 3;
    //        }
    //        compCount++;
    //        j++;
    //    }
//
    //    if (!isSwapped){
    //        break;
    //    }
    //}

    for(int i = 0; i < size; i++){  //i stands for the first index of the array
        for(int j = 1; j < size - i; j++){  //j is the second index of the array, this loop will continue till the biggest element at the "size-i"th index
            if(*(arr + j - 1) > *(arr + j)){
                int tmp = *(arr + j);
                *(arr + j) = *(arr + j - 1);
                *(arr + j - 1) = tmp;
                moveCount+=3;
            }
            compCount++;    //increases the compCount
        }
    }
}

void sorting::mergeSort(int *arr, const int size, int &compCount, int &moveCount) {
    //this calls another function which will work recursively
    mergeSortR(arr, 0, size - 1, compCount, moveCount);
}

void sorting::mergeSortR(int *arr, int l, int r, int &compCount, int &moveCount){
    //l is for left, r is for right
    if (l >= r){
        return;
    }

    //m is for mid
    int m = (l + r) / 2;

    //down below, it will divide the array to two sub arrays
    mergeSortR(arr, l, m, compCount, moveCount);      //right half of the array
    mergeSortR(arr, m+1, r, compCount, moveCount);    //left half of the array
    merge(arr, l, m, r, compCount, moveCount);    //merge the two sides together
}

void sorting::merge(int *arr, int l, int m, int r, int &compCount, int &moveCount){
    //tmp is a temporary array to hold the sorted elements
    int tmp[r - l + 1];

    //i j k are three different type of index
    int i = l;      //i represents left
    int j = m + 1;  //j represents mid
    int k = 0;      //k for current arrays index

    //this loop will merge these
    while(i <= m && j <= r){
        if(*(arr + i) <= *(arr + j)){
            tmp[k++] = *(arr + i++);
        }
        else{
            tmp[k++] = *(arr + j++);
        }
        moveCount++;
        compCount++;
    }

    //this loop will transfer remaining elements of the left half to temporary array
    while(i <= m){
        tmp[k++] = *(arr + i++);
        moveCount++;
    }
    //this loop will transfer remaining elements of the right half to temporary array
    while(j <= r){
        tmp[k++] = *(arr + j++);
        moveCount++;
    }
    //this loop will transfer sorted elements to the "arr"
    for(int a = l; a <= r; a++){
        arr[a] = tmp[a - l];
        moveCount++;
    }
}


void sorting::quickSort(int *arr, const int size, int &compCount, int &moveCount) {
    //bool = false because this is for "quickSort", not "hybridSort"
    quickSortR(arr, 0, size - 1, false, compCount, moveCount);
}

void sorting::hybridSort(int *arr, const int size, int &compCount, int &moveCount) {
    //bool = true because this will work for hybridSort.
    quickSortR(arr, 0, size - 1, true, compCount, moveCount);
}

void sorting::quickSortR(int *arr, int l, int r, bool hybrid, int &compCount, int &moveCount) {
    if(!hybrid){
        if(l < r){
            int i = subquickSort(arr, l, r, compCount, moveCount);

            quickSortR(arr, l, i - 1, hybrid, compCount, moveCount);
            quickSortR(arr, i + 1, r, hybrid, compCount, moveCount);
        }
    }
    else{
        if(l < r){
            int size = l - r + 1;
            if(size > 0 && size <= 20){

                int* tempArr = new int[size];   //declares the temporary array
                for(int i = 0; i < size; i++){  //initializes the temporary array
                    *(tempArr + i) = *(arr + l + i);
                    moveCount++;
                }

                bubbleSort(arr, size, compCount, moveCount);

                for(int i = 0; i < size; i++){
                    *(arr + l + i) = *(tempArr + i);
                }
            }
            else{
                int i = subquickSort(arr, l, r, compCount, moveCount);

                quickSortR(arr, l, i - 1, hybrid, compCount, moveCount);
                quickSortR(arr, i + 1, r, hybrid, compCount, moveCount);
            }
        }
    };
}

int sorting::subquickSort(int *arr, int l, int r, int &compCount, int &moveCount) {
    int p = *(arr + r);
    moveCount++;

    int i = (l - 1);

    for(int j = l; j <= r - 1; j++){
        if(*(arr+j) < p){
            i++;
            int tmp = *(arr + i);
            *(arr + i) = *(arr + j);
            *(arr + j) = tmp;
            moveCount += 3;
        }
        compCount++;
    }
    int tmp = *(arr + i + 1);
    *(arr + i + 1) = *(arr + r);
    *(arr + r) = tmp;
    moveCount += 3;

    return(i + 1);
}

sorting::sorting() {

}

sorting::~sorting() {

}
