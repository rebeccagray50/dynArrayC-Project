/*
 * MemoryManager.cpp
 *  Created on: 28 Oct 2024
 *      Author: rg01103
 */

#include "MemoryManager.h"
#include "memoryBlock.h"
#include "memoryBlock.cpp"
#include <iostream>
using namespace std;

//parameterised constructor
MemoryManager::MemoryManager(std::vector<memoryBlock*> blocksInp){
	blocks = blocksInp;
	cout << "Memory Manager constructor success" << endl;
}

//destructor
MemoryManager::~MemoryManager(){
	cout << "Destructor called for memory manager" << endl;
}

