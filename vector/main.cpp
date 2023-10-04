
/// @brief Read the following blog
/// https://www.geeksforgeeks.org/how-to-implement-our-own-vector-class-in-c/

/// @brief Listed to following video from time stamp 23:40
/// https://www.youtube.com/watch?v=TaySu61K6dI

#include <stdio.h>
#include <iostream>

using namespace std;

template <typename T>
class vector{

    private:
    T* arr;         // creation of a pointer array
    int current;    // current index of the vector
    int capacity;       // capacity of the vector

    public:

    /// @brief Constructor to create a vector of size 1
    vector(){
        arr = new T[1]; // pointer array variable is allocated a 1 memory location of type T
        current = 0;    // setting current index of the vector to 0
        capacity = 1;       // setting size of the vector to 1 as there is only 1 memory location
    }

    /// @brief Destructor to delete the entire array
    ~vector(){
        delete [] arr;   // removing the memory allocation for the pointer variable
    }

    /// @brief Returns the elelemnt at a specific index
    /// @param index Denotes the index of the element
    /// @return Returns the element at the index
    T get(int index){
        T val;
        try
        {
            if(index <= current){
                val = arr[index];
            } else {
                throw index;
            }
        }
        catch(int i) 
        {
            std::cout << "ERROR: Value not available as index " << i << " does not exist in vector"<< endl;
        }
        
        return val;
    }

    /// @brief Returns the size of the vector
    /// @return Size is returned as an integer 
    int size(){
        return current;
    }

    /// @brief Returns the size of the vector
    /// @return size is returned as an integer
    int get_size(){
        return capacity;
    }

    /// @brief Insert an emenet at the end of the vector
    /// @param data Denotes the element to be inserted at the end of vector
    void push(T data){

        if(current == capacity){
            T* temp = new T[capacity*2];

            for(int i=0; i<capacity; i++){
                temp[i] = arr[i];
            }

            delete [] arr;

            capacity *= 2;
            arr = temp;
        }

        arr[current] = data;
        current++;
    }

    /// @brief Replace an element at a specific location in the vector
    /// @param a First parameter denote the element
    /// @param b Second parameter denote the location of replacement
    void push(T a, int b){
        try
        {
            arr[b] = a;
            throw b;
        }
        catch(int i)
        {
            std::cout << "ERROR: index " << i << " does not exist in vector"<< endl;
        }
    }

    /// @brief Remove last element from the vector
    void pop(){

    }

    void print(){
        for(int i=0; i<current; i++){
            cout<<arr[i]<<endl;
        }
    }
};


int main(){

    vector<int> v1;
    vector<string> v2;

    v1.push(1);
    v1.push(2);
    v1.push(6, 9);

    // v1.print();
    // cout<<"getting value at index "<<v1.get(0)<<endl;
    cout<<"getting value at index "<<v1.get(1)<<endl;
    cout<<"getting value at index "<<v1.get(9)<<endl;

    v1.print();

    cout<<&v1<<" "<<v1.size()<<endl;

    v2.push("komal ");
    v2.push("Kalyanraman ");
    v2.push("yerra", 10);

    cout<<"getting value at index "<<v2.get(1)<<endl;
    cout<<"getting value at index "<<v2.get(9)<<endl;

    v2.print();

    cout<<&v2<<" "<<v2.size()<<endl;

    cout<<"hello world !!"<<endl;
    return 0;
}
