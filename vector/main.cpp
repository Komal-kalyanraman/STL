
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
    T* arr;
    int current;
    int size;

    public:

    /// @brief Constructor to create a vector of size 1

    vector(){
        arr = new T[1];
        current = 0;
        size = 1;
    }

    /// @brief Destructor to delete the entire array
    ~vector(){
        delete arr[];
    }

    /// @brief Returns the elelemnt at a specific index
    /// @param a Denotes the index of the element
    /// @return Returns the element at the index
    T get(int a){
        return a;
    }

    /// @brief Returns the size of the vector
    /// @return Size is returned as an integer 
    int size(){
        return current;
    }

    /// @brief Returns the size of the vector
    /// @return size is returned as an integer
    int get_size(){
        return size;
    }

    /// @brief Insert an emenet at the end of the vector
    /// @param a Denotes the element to be inserted at the end of vector
    void push(T a){

        if(current == size){
            current = size*2;

            arr[]

        }

    }

    /// @brief Replace an element at a specific location in the vector
    /// @param a First parameter denote the element
    /// @param b Second parameter denote the location of replacement
    void push(T a, int b){

    }

    /// @brief Remove last element from the vector
    void pop(){

    }

};


int main(){

    vector<int> v1;
    vector<string> v2;

    v1.pop();

    cout<<&v1<<" "<<v1.size()<<endl;
    cout<<&v2<<" "<<v2.size()<<endl;

    cout<<"hello world !!"<<endl;
    return 0;
}
