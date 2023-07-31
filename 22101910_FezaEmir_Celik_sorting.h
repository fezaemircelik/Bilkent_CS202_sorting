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

#ifndef HOMEWORKS_SORTING_H
#define HOMEWORKS_SORTING_H

#endif //HOMEWORKS_SORTING_H
#include <iostream>
using namespace std;

class sorting{
public:
    sorting();
    ~sorting();

    static void insertionSort(int *arr, const int size, int &compCount, int &moveCount);

    static void bubbleSort(int *arr, const int size, int &compCount, int &moveCount);

    static void mergeSort(int *arr, const int size, int &compCount, int &moveCount);

    static void quickSort(int *arr, const int size, int &compCount, int &moveCount);

    static void hybridSort(int *arr, const int size, int &compCount, int &moveCount);

    static void mergeSortR(int *arr, int l, int r, int &compCount, int &moveCount);

    static void merge(int *arr, int l, int m, int r, int &compCount, int &moveCount);

    static void quickSortR(int *arr, int start, int end, bool hybrid, int &compCount, int &moveCount);

    static int subquickSort(int *arr, int start, int end, int &compCount, int &moveCount);
private:
};