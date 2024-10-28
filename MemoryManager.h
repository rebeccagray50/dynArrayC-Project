/*
 * MemoryManager.h
 *
 *  Created on: 28 Oct 2024
 *      Author: rg01103
 */

#ifndef MEMORYMANAGER_H_
#define MEMORYMANAGER_H_

class MemoryManager{
private:
	//use a vector to manage multiple blocks
	std::vector<MemoryBlock*> blocks;

public:
	MemoryManager(std::vector<memoryBlock*>); //constructor
	~MemoryManager(); //destructor

	void freeMemory(); //free all blocks
	void displayStatus(); //display memory status

};



#endif /* MEMORYMANAGER_H_ */
