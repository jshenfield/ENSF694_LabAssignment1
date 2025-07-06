#include "MyArray.h"

int search(const MyArray* myArray, int obj){
// Students are supposed to complete the implementation of the this function

    for(int i = 0; i<(myArray->list_size); i++)
        if(obj == myArray->array[i]){
            return i;
        }
        
    return -1;
        
}

void initialize(MyArray* myArray) {
    // Students are supposed to complete the implementation of the this function

    myArray->list_size = 0;

}

int retrieve_at(MyArray* myArray, int pos){
    // Students are supposed to complete the implementation of the this function

    return myArray->array[pos];
}

int count(MyArray* myArray, int obj ){
    // Students are supposed to complete the implementation of the this function
    int counter = 0;

    for(int i = 0; i < myArray->list_size; i++){
        if(obj == myArray->array[i]){
            counter++;
        }
    }
    return counter;

}

void append( MyArray* myArray, int array[], int n ) {
    // Students are supposed to complete the implementation of the this function

    if(myArray->list_size + n <= SIZE) {
        for(int i = myArray->list_size; i < SIZE; i++){
            myArray->array[i] = array[i - myArray->list_size];
        }

    }
    myArray->list_size += n;

}

void insert_at(MyArray* myArray, int pos, int val) {
    // Students are supposed to complete the implementation of the this function

    for(int i = myArray->list_size - 1; i >= pos; i--){
        myArray->array[i + 1] = myArray->array[i];
    }
    myArray->array[pos] = val;

    myArray->list_size++;

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
    int counter = 0;

    for(int i = 0; i < myArray->list_size; i++) {
        if(myArray->array[i] == value) {
            myArray->array[i] = 0;
            counter++;
        }
    }
    return counter;
}

// You can modify this function however you want:  it will not be tested

void display_all(MyArray* myArray) {
    // Students are supposed to complete the implementation of the this function
}

bool is_full(MyArray* myArray){
    // Students are supposed to complete the implementation of the this function
    if(myArray->list_size == SIZE) {
        return true;
    }

    return false;
}

bool isEmpty(MyArray* myArray){
    // Students are supposed to complete the implementation of the this function
    if(myArray->list_size == 0) {
        return true;
    }
    return false;

}

int size(MyArray* myArray){
    // Students are supposed to complete the implementation of the this function
    return myArray->list_size;
}
