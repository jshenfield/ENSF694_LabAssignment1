 /*
 *  MyArray.cpp
 *  ENSF 694 Lab 1 Exercise F
 *  Completed by: Jack Shenfield
 *  Development Date: July 5th, 2025
 */

#include "MyArray.h"

int search(const MyArray* myArray, int obj){
// Students are supposed to complete the implementation of the this function

    for(int i = 0; i<(myArray->list_size); i++) // search through the entire array, check if the obj values matches anything.
        if(obj == myArray->array[i]){ // The first time it matches, return the index it matches at
            return i;
        }
        
    return -1;
        
}

void initialize(MyArray* myArray) {
    // Students are supposed to complete the implementation of the this function

    myArray->list_size = 0; // set list size to 0

}

int retrieve_at(MyArray* myArray, int pos){
    // Students are supposed to complete the implementation of the this function

    return myArray->array[pos]; // retrieve the value from given position
}

int count(MyArray* myArray, int obj ){
    // Students are supposed to complete the implementation of the this function
    int counter = 0; // initialize counter at 0

    for(int i = 0; i < myArray->list_size; i++){ // go through the entire array and increment counter when obj matches a value
        if(obj == myArray->array[i]){
            counter++;
        }
    }
    return counter; // return the number of matches

}

void append( MyArray* myArray, int array[], int n ) {
    // Students are supposed to complete the implementation of the this function

    if(myArray->list_size + n <= SIZE) { // only continue this if there is space for n elements in the array
        for(int i = myArray->list_size; i < myArray->list_size + n; i++){ // initialize i at current list length (the next empty index)
            myArray->array[i] = array[i]; // store value
        }

    }
    myArray->list_size += n;

}

void insert_at(MyArray* myArray, int pos, int val) {
    // Students are supposed to complete the implementation of the this function

    for(int i = myArray->list_size - 1; i >= pos; i--){ // starting at the end of the list, move all values over one
        myArray->array[i + 1] = myArray->array[i];
    }
    myArray->array[pos] = val; // insert desired value

    myArray->list_size++; // increment list size

}

int remove_at(MyArray* myArray, int pos ) {
    // Students are supposed to complete the implementation of the this function
    int removed_value = myArray->array[pos];

    for(int i = pos; i < (myArray->list_size - 1); i++){
        myArray->array[i] = myArray->array[i + 1];
    }
    
    myArray->list_size--;
    return removed_value;
}

int remove_all(MyArray* myArray, int value ) {
    // Students are supposed to complete the implementation of the this function
    int counter = 0; // initialize counter

    for(int i = 0; i < myArray->list_size; i++) { // if any array memory location == value, set it to 0
        if(myArray->array[i] == value) {
            myArray->array[i] = 0;
            counter++; // increment counter when found
        }
    }
    return counter; // return number of array elements removed
}

// You can modify this function however you want:  it will not be tested

void display_all(MyArray* myArray) {
    // Students are supposed to complete the implementation of the this function
}

bool is_full(MyArray* myArray){
    // Students are supposed to complete the implementation of the this function
    if(myArray->list_size == SIZE) { 
        return true; // if it is full return true
    }

    return false; // otherwise return false
}

bool isEmpty(MyArray* myArray){
    // Students are supposed to complete the implementation of the this function
    if(myArray->list_size == 0) {
        return true; // if it is empty return true
    }
    return false; // otherwise return false

}

int size(MyArray* myArray){
    // Students are supposed to complete the implementation of the this function
    return myArray->list_size; // return the list size
}
