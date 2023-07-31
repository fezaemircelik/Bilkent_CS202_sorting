/**
* Title: Algorithm analysis & Sorting
* Author : Feza Emir Çelik
* ID: 22101910
* Section : 1
* Homework : 1
* Description : sorting arrays in given algorithms
*/

#include "22101910_FezaEmir_Celik_sorting.h"
#include <iostream>
#include <math.h>
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include "cstdio"
#include <algorithm>
#include <random>

using namespace std;
using namespace std::chrono;

void arrayCreatorFor2_1(int* arr, int size){
    for(int i = 0; i < size; i++){
        *(arr + i) = rand() %1000 + 1;
    }
}

void arrayCreatorFor2_2(int* arr, int size){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<size && j < size/log2(size)){
        while(i<size && k < log2(size)){
            int temp = rand()%5 + 5*j;
            temp += 1;
            *(arr + i) = temp;
            k++;
        }
        j++;
    }
}

void arrayCreatorFor2_3(int* arr, int size){
    int i = 0;
    int j = size/log2(size);
    int k = 0;
    while(i<size && j >0){
        while(k< log2(size) && i < size){
            int temp = rand()%5 + 5*j;
            temp += 1;
            *(arr + i) = temp;
            i++;
        }
        j--;
    }
}

void sort1(){
    srand(time(NULL));
    int moveCount = 0;
    int compCount = 0;

    clock_t timer;

    cout << " Answer of 2-b-1" << endl;

    int size = 1000;
    while(size <= 20000){
        if(size == 1000){
            int* arr = new int[size];
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "size: " << size << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_1(arr, size);

            timer = clock();
            time_point<system_clock > startTime1;
            duration<double, milli> elapsedTime1;

            startTime1= system_clock::now();

            sorting::insertionSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime1 = system_clock::now() - startTime1;

            cout << "insertionSort: " << elapsedTime1.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_1(arr, size);

            timer = clock();
            time_point<system_clock > startTime2;
            duration<double, milli> elapsedTime2;

            startTime2 = system_clock::now();

            sorting::bubbleSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime2 = system_clock::now() - startTime2;

            cout << "bubbleSort: " << elapsedTime2.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_1(arr, size);

            timer = clock();
            time_point<system_clock > startTime3;
            duration<double, milli> elapsedTime3;

            startTime3 = system_clock::now();

            sorting::mergeSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime3 = system_clock::now() - startTime3;

            cout << "mergeSort: " << elapsedTime3.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_1(arr, size);

            timer = clock();
            time_point<system_clock > startTime4;
            duration<double, milli> elapsedTime4;

            startTime4 = system_clock::now();

            sorting::quickSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime4 = system_clock::now() - startTime4;

            cout << "quickSort: " << elapsedTime4.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_1(arr, size);

            timer = clock();
            time_point<system_clock > startTime5;
            duration<double, milli> elapsedTime5;

            startTime5 = system_clock::now();

            sorting::hybridSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime5 = system_clock::now() - startTime5;

            cout << "hybridSort: " << elapsedTime5.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        }
        if(size == 5000){
            int* arr = new int[size];
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "size: " << size << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_1(arr, size);

            timer = clock();
            time_point<system_clock > startTime1;
            duration<double, milli> elapsedTime1;

            startTime1= system_clock::now();

            sorting::insertionSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime1 = system_clock::now() - startTime1;

            cout << "insertionSort: " << elapsedTime1.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_1(arr, size);

            timer = clock();
            time_point<system_clock > startTime2;
            duration<double, milli> elapsedTime2;

            startTime2 = system_clock::now();

            sorting::bubbleSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime2 = system_clock::now() - startTime2;

            cout << "bubbleSort: " << elapsedTime2.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_1(arr, size);

            timer = clock();
            time_point<system_clock > startTime3;
            duration<double, milli> elapsedTime3;

            startTime3 = system_clock::now();

            sorting::mergeSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime3 = system_clock::now() - startTime3;

            cout << "mergeSort: " << elapsedTime3.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_1(arr, size);

            timer = clock();
            time_point<system_clock > startTime4;
            duration<double, milli> elapsedTime4;

            startTime4 = system_clock::now();

            sorting::quickSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime4 = system_clock::now() - startTime4;

            cout << "quickSort: " << elapsedTime4.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_1(arr, size);

            timer = clock();
            time_point<system_clock > startTime5;
            duration<double, milli> elapsedTime5;

            startTime5 = system_clock::now();

            sorting::hybridSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime5 = system_clock::now() - startTime5;

            cout << "hybridSort: " << elapsedTime5.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        }
        if(size == 10000){
            int* arr = new int[size];
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "size: " << size << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_1(arr, size);

            timer = clock();
            time_point<system_clock > startTime1;
            duration<double, milli> elapsedTime1;

            startTime1= system_clock::now();

            sorting::insertionSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime1 = system_clock::now() - startTime1;

            cout << "insertionSort: " << elapsedTime1.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_1(arr, size);

            timer = clock();
            time_point<system_clock > startTime2;
            duration<double, milli> elapsedTime2;

            startTime2 = system_clock::now();

            sorting::bubbleSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime2 = system_clock::now() - startTime2;

            cout << "bubbleSort: " << elapsedTime2.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_1(arr, size);

            timer = clock();
            time_point<system_clock > startTime3;
            duration<double, milli> elapsedTime3;

            startTime3 = system_clock::now();

            sorting::mergeSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime3 = system_clock::now() - startTime3;

            cout << "mergeSort: " << elapsedTime3.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_1(arr, size);

            timer = clock();
            time_point<system_clock > startTime4;
            duration<double, milli> elapsedTime4;

            startTime4 = system_clock::now();

            sorting::quickSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime4 = system_clock::now() - startTime4;

            cout << "quickSort: " << elapsedTime4.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_1(arr, size);

            timer = clock();
            time_point<system_clock > startTime5;
            duration<double, milli> elapsedTime5;

            startTime5 = system_clock::now();

            sorting::hybridSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime5 = system_clock::now() - startTime5;

            cout << "hybridSort: " << elapsedTime5.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        }
        if(size == 20000){
            int* arr = new int[size];
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "size: " << size << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_1(arr, size);

            timer = clock();
            time_point<system_clock > startTime1;
            duration<double, milli> elapsedTime1;

            startTime1= system_clock::now();

            sorting::insertionSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime1 = system_clock::now() - startTime1;

            cout << "insertionSort: " << elapsedTime1.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_1(arr, size);

            timer = clock();
            time_point<system_clock > startTime2;
            duration<double, milli> elapsedTime2;

            startTime2 = system_clock::now();

            sorting::bubbleSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime2 = system_clock::now() - startTime2;

            cout << "bubbleSort: " << elapsedTime2.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_1(arr, size);

            timer = clock();
            time_point<system_clock > startTime3;
            duration<double, milli> elapsedTime3;

            startTime3 = system_clock::now();

            sorting::mergeSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime3 = system_clock::now() - startTime3;

            cout << "mergeSort: " << elapsedTime3.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_1(arr, size);

            timer = clock();
            time_point<system_clock > startTime4;
            duration<double, milli> elapsedTime4;

            startTime4 = system_clock::now();

            sorting::quickSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime4 = system_clock::now() - startTime4;

            cout << "quickSort: " << elapsedTime4.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_1(arr, size);

            timer = clock();
            time_point<system_clock > startTime5;
            duration<double, milli> elapsedTime5;

            startTime5 = system_clock::now();

            sorting::hybridSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime5 = system_clock::now() - startTime5;

            cout << "hybridSort: " << elapsedTime5.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        }
        size += 1000;
    }
}

void sort2(){
    srand(time(NULL));
    int moveCount = 0;
    int compCount = 0;

    clock_t timer;

    cout << " Answer of 2-b-2" << endl;

    int size = 1000;
    while(size <= 20000){
        if(size == 1000){
            int* arr = new int[size];
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "size: " << size << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_2(arr, size);

            timer = clock();
            time_point<system_clock > startTime1;
            duration<double, milli> elapsedTime1;

            startTime1= system_clock::now();

            sorting::insertionSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime1 = system_clock::now() - startTime1;

            cout << "insertionSort: " << elapsedTime1.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_2(arr, size);

            timer = clock();
            time_point<system_clock > startTime2;
            duration<double, milli> elapsedTime2;

            startTime2 = system_clock::now();

            sorting::bubbleSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime2 = system_clock::now() - startTime2;

            cout << "bubbleSort: " << elapsedTime2.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_2(arr, size);

            timer = clock();
            time_point<system_clock > startTime3;
            duration<double, milli> elapsedTime3;

            startTime3 = system_clock::now();

            sorting::mergeSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime3 = system_clock::now() - startTime3;

            cout << "mergeSort: " << elapsedTime3.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_2(arr, size);

            timer = clock();
            time_point<system_clock > startTime4;
            duration<double, milli> elapsedTime4;

            startTime4 = system_clock::now();

            sorting::quickSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime4 = system_clock::now() - startTime4;

            cout << "quickSort: " << elapsedTime4.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_2(arr, size);

            timer = clock();
            time_point<system_clock > startTime5;
            duration<double, milli> elapsedTime5;

            startTime5 = system_clock::now();

            sorting::hybridSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime5 = system_clock::now() - startTime5;

            cout << "hybridSort: " << elapsedTime5.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        }
        if(size == 5000){
            int* arr = new int[size];
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "size: " << size << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_2(arr, size);

            timer = clock();
            time_point<system_clock > startTime1;
            duration<double, milli> elapsedTime1;

            startTime1= system_clock::now();

            sorting::insertionSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime1 = system_clock::now() - startTime1;

            cout << "insertionSort: " << elapsedTime1.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_2(arr, size);

            timer = clock();
            time_point<system_clock > startTime2;
            duration<double, milli> elapsedTime2;

            startTime2 = system_clock::now();

            sorting::bubbleSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime2 = system_clock::now() - startTime2;

            cout << "bubbleSort: " << elapsedTime2.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_2(arr, size);

            timer = clock();
            time_point<system_clock > startTime3;
            duration<double, milli> elapsedTime3;

            startTime3 = system_clock::now();

            sorting::mergeSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime3 = system_clock::now() - startTime3;

            cout << "mergeSort: " << elapsedTime3.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_2(arr, size);

            timer = clock();
            time_point<system_clock > startTime4;
            duration<double, milli> elapsedTime4;

            startTime4 = system_clock::now();

            sorting::quickSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime4 = system_clock::now() - startTime4;

            cout << "quickSort: " << elapsedTime4.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_2(arr, size);

            timer = clock();
            time_point<system_clock > startTime5;
            duration<double, milli> elapsedTime5;

            startTime5 = system_clock::now();

            sorting::hybridSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime5 = system_clock::now() - startTime5;

            cout << "hybridSort: " << elapsedTime5.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        }
        if(size == 10000){
            int* arr = new int[size];
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "size: " << size << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_2(arr, size);

            timer = clock();
            time_point<system_clock > startTime1;
            duration<double, milli> elapsedTime1;

            startTime1= system_clock::now();

            sorting::insertionSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime1 = system_clock::now() - startTime1;

            cout << "insertionSort: " << elapsedTime1.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_2(arr, size);

            timer = clock();
            time_point<system_clock > startTime2;
            duration<double, milli> elapsedTime2;

            startTime2 = system_clock::now();

            sorting::bubbleSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime2 = system_clock::now() - startTime2;

            cout << "bubbleSort: " << elapsedTime2.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_2(arr, size);

            timer = clock();
            time_point<system_clock > startTime3;
            duration<double, milli> elapsedTime3;

            startTime3 = system_clock::now();

            sorting::mergeSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime3 = system_clock::now() - startTime3;

            cout << "mergeSort: " << elapsedTime3.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_2(arr, size);

            timer = clock();
            time_point<system_clock > startTime4;
            duration<double, milli> elapsedTime4;

            startTime4 = system_clock::now();

            sorting::quickSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime4 = system_clock::now() - startTime4;

            cout << "quickSort: " << elapsedTime4.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_2(arr, size);

            timer = clock();
            time_point<system_clock > startTime5;
            duration<double, milli> elapsedTime5;

            startTime5 = system_clock::now();

            sorting::hybridSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime5 = system_clock::now() - startTime5;

            cout << "hybridSort: " << elapsedTime5.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        }
        if(size == 20000){
            int* arr = new int[size];
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "size: " << size << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_2(arr, size);

            timer = clock();
            time_point<system_clock > startTime1;
            duration<double, milli> elapsedTime1;

            startTime1= system_clock::now();

            sorting::insertionSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime1 = system_clock::now() - startTime1;

            cout << "insertionSort: " << elapsedTime1.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0; int dulsiken = 0;
            arrayCreatorFor2_2(arr, size);

            timer = clock();
            time_point<system_clock > startTime2;
            duration<double, milli> elapsedTime2;

            startTime2 = system_clock::now();

            sorting::bubbleSort(arr, size, compCount, dulsiken);
            timer = clock() - timer;
            elapsedTime2 = system_clock::now() - startTime2;

            cout << "bubbleSort: " << elapsedTime2.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_2(arr, size);

            timer = clock();
            time_point<system_clock > startTime3;
            duration<double, milli> elapsedTime3;

            startTime3 = system_clock::now();

            sorting::mergeSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime3 = system_clock::now() - startTime3;

            cout << "mergeSort: " << elapsedTime3.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_2(arr, size);

            timer = clock();
            time_point<system_clock > startTime4;
            duration<double, milli> elapsedTime4;

            startTime4 = system_clock::now();

            sorting::quickSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime4 = system_clock::now() - startTime4;

            cout << "quickSort: " << elapsedTime4.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_2(arr, size);

            timer = clock();
            time_point<system_clock > startTime5;
            duration<double, milli> elapsedTime5;

            startTime5 = system_clock::now();

            sorting::hybridSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime5 = system_clock::now() - startTime5;

            cout << "hybridSort: " << elapsedTime5.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        }
        size += 1000;
    }
}

void sort3(){
    srand(time(NULL));
    int moveCount = 0;
    int compCount = 0;

    clock_t timer;

    cout << " Answer of 2-b-3" << endl;

    int size = 1000;
    while(size <= 20000){
        if(size == 1000){
            int* arr = new int[size];
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "size: " << size << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_3(arr, size);

            timer = clock();
            time_point<system_clock > startTime1;
            duration<double, milli> elapsedTime1;

            startTime1= system_clock::now();

            sorting::insertionSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime1 = system_clock::now() - startTime1;

            cout << "insertionSort: " << elapsedTime1.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_3(arr, size);

            timer = clock();
            time_point<system_clock > startTime2;
            duration<double, milli> elapsedTime2;

            startTime2 = system_clock::now();

            sorting::bubbleSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime2 = system_clock::now() - startTime2;

            cout << "bubbleSort: " << elapsedTime2.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_3(arr, size);

            timer = clock();
            time_point<system_clock > startTime3;
            duration<double, milli> elapsedTime3;

            startTime3 = system_clock::now();

            sorting::mergeSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime3 = system_clock::now() - startTime3;

            cout << "mergeSort: " << elapsedTime3.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_3(arr, size);

            timer = clock();
            time_point<system_clock > startTime4;
            duration<double, milli> elapsedTime4;

            startTime4 = system_clock::now();

            sorting::quickSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime4 = system_clock::now() - startTime4;

            cout << "quickSort: " << elapsedTime4.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_3(arr, size);

            timer = clock();
            time_point<system_clock > startTime5;
            duration<double, milli> elapsedTime5;

            startTime5 = system_clock::now();

            sorting::hybridSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime5 = system_clock::now() - startTime5;

            cout << "hybridSort: " << elapsedTime5.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        }
        if(size == 5000){
            int* arr = new int[size];
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "size: " << size << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_3(arr, size);

            timer = clock();
            time_point<system_clock > startTime1;
            duration<double, milli> elapsedTime1;

            startTime1= system_clock::now();

            sorting::insertionSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime1 = system_clock::now() - startTime1;

            cout << "insertionSort: " << elapsedTime1.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_3(arr, size);

            timer = clock();
            time_point<system_clock > startTime2;
            duration<double, milli> elapsedTime2;

            startTime2 = system_clock::now();

            sorting::bubbleSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime2 = system_clock::now() - startTime2;

            cout << "bubbleSort: " << elapsedTime2.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_3(arr, size);

            timer = clock();
            time_point<system_clock > startTime3;
            duration<double, milli> elapsedTime3;

            startTime3 = system_clock::now();

            sorting::mergeSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime3 = system_clock::now() - startTime3;

            cout << "mergeSort: " << elapsedTime3.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_3(arr, size);

            timer = clock();
            time_point<system_clock > startTime4;
            duration<double, milli> elapsedTime4;

            startTime4 = system_clock::now();

            sorting::quickSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime4 = system_clock::now() - startTime4;

            cout << "quickSort: " << elapsedTime4.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_3(arr, size);

            timer = clock();
            time_point<system_clock > startTime5;
            duration<double, milli> elapsedTime5;

            startTime5 = system_clock::now();

            sorting::hybridSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime5 = system_clock::now() - startTime5;

            cout << "hybridSort: " << elapsedTime5.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        }
        if(size == 10000){
            int* arr = new int[size];
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "size: " << size << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_3(arr, size);

            timer = clock();
            time_point<system_clock > startTime1;
            duration<double, milli> elapsedTime1;

            startTime1= system_clock::now();

            sorting::insertionSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime1 = system_clock::now() - startTime1;

            cout << "insertionSort: " << elapsedTime1.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_3(arr, size);

            timer = clock();
            time_point<system_clock > startTime2;
            duration<double, milli> elapsedTime2;

            startTime2 = system_clock::now();

            sorting::bubbleSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime2 = system_clock::now() - startTime2;

            cout << "bubbleSort: " << elapsedTime2.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_3(arr, size);

            timer = clock();
            time_point<system_clock > startTime3;
            duration<double, milli> elapsedTime3;

            startTime3 = system_clock::now();

            sorting::mergeSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime3 = system_clock::now() - startTime3;

            cout << "mergeSort: " << elapsedTime3.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_3(arr, size);

            timer = clock();
            time_point<system_clock > startTime4;
            duration<double, milli> elapsedTime4;

            startTime4 = system_clock::now();

            sorting::quickSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime4 = system_clock::now() - startTime4;

            cout << "quickSort: " << elapsedTime4.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_3(arr, size);

            timer = clock();
            time_point<system_clock > startTime5;
            duration<double, milli> elapsedTime5;

            startTime5 = system_clock::now();

            sorting::hybridSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime5 = system_clock::now() - startTime5;

            cout << "hybridSort: " << elapsedTime5.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        }
        if(size == 20000){
            int* arr = new int[size];
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "size: " << size << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_3(arr, size);

            timer = clock();
            time_point<system_clock > startTime1;
            duration<double, milli> elapsedTime1;

            startTime1= system_clock::now();

            sorting::insertionSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime1 = system_clock::now() - startTime1;

            cout << "insertionSort: " << elapsedTime1.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_3(arr, size);

            timer = clock();
            time_point<system_clock > startTime2;
            duration<double, milli> elapsedTime2;

            startTime2 = system_clock::now();

            sorting::bubbleSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime2 = system_clock::now() - startTime2;

            cout << "bubbleSort: " << elapsedTime2.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_3(arr, size);

            timer = clock();
            time_point<system_clock > startTime3;
            duration<double, milli> elapsedTime3;

            startTime3 = system_clock::now();

            sorting::mergeSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime3 = system_clock::now() - startTime3;

            cout << "mergeSort: " << elapsedTime3.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_3(arr, size);

            timer = clock();
            time_point<system_clock > startTime4;
            duration<double, milli> elapsedTime4;

            startTime4 = system_clock::now();

            sorting::quickSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime4 = system_clock::now() - startTime4;

            cout << "quickSort: " << elapsedTime4.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

            compCount = 0, moveCount = 0;
            arrayCreatorFor2_3(arr, size);

            timer = clock();
            time_point<system_clock > startTime5;
            duration<double, milli> elapsedTime5;

            startTime5 = system_clock::now();

            sorting::hybridSort(arr, size, compCount, moveCount);
            timer = clock() - timer;
            elapsedTime5 = system_clock::now() - startTime5;

            cout << "hybridSort: " << elapsedTime5.count() << endl;
            cout << "compCount: " << compCount << endl;
            cout << "moveCount: " << moveCount << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        }
        size += 1000;
    }
}

int main(){
    srand(time(NULL));
    sort1();
    sort2();
    sort3();
}
