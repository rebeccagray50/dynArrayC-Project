#include <iostream>

// class to represent a block of memory
// includes data and a size
class MemoryBlock{
private:
    int* data; 
    size_t size;

public: 
    MemoryBlock(size_t sz) : size(sz), data(new int[sz]){}

    //Func to access memory via pointer
    int* getPointer(){
        return data;
    }

    //Destructor to release memory 
    ~MemoryBlock(){
        delete[] data;
        std::cout <<"~~ memory block released ~~" << std::endl;
    }
};