#ifndef SIMPLE_DATA_STRUCTURES_CIRCULARBUFFER_T_H_
#define SIMPLE_DATA_STRUCTURES_CIRCULARBUFFER_T_H_

/*
 *
 * Template for a circular buffer
 *
 */

#define DEBUG_BUFFER

#ifdef DEBUG_BUFFER
#include <iostream>
#endif
#define CIRCULAR_BUFFER_LENGTH 3

template <typename T>

class CircularBuffer {

private:
    int writeIndex;
    int readIndex;
    T Buffer[CIRCULAR_BUFFER_LENGTH];

public:
    CircularBuffer(){

        this->writeIndex = 0;
        this->readIndex = 0;

    };
    void writeElement( T  elementToWrite){
        this->Buffer[this->writeIndex] = elementToWrite ;    // put Task into current end position of the buffer
        this->writeIndex++;                                     // increment buffer end index
        this->writeIndex %= CIRCULAR_BUFFER_LENGTH ;                // wrap end index around the buffer length
    };
    T readElement(){
        T elementFromBuffer = this->Buffer[this->readIndex]; // read the task from the read index position
        this->readIndex++;
        this->readIndex %= CIRCULAR_BUFFER_LENGTH;
        return elementFromBuffer;
    };

    int getSize(){
        return CIRCULAR_BUFFER_LENGTH-1;
    }

    bool isEmpty(){
        return readIndex==writeIndex;
    }

    bool isFull(){
        int nextWriteIndex = ( writeIndex + 1 ) % CIRCULAR_BUFFER_LENGTH ;
        return nextWriteIndex == readIndex ;
    }

    void clear(){
        this->readIndex =  0 ;
        this->writeIndex = 0 ;
    }

    bool writeElementWithCheck( T elementToWrite ){
        bool isBufferFull = this->isFull();

        if(!isBufferFull){
            this->writeElement(elementToWrite);
        };

        return isBufferFull;
    }

    bool readElementWithCheck( T& elementToRead ){
        bool isBufferEmpty = this->isEmpty();

        if(!isBufferEmpty){
            elementToRead = this->readElement();
        }

        return isBufferEmpty;
    }


#ifdef DEBUG_BUFFER
    void printBuffer(){
        std::cout << "Buffer Content: ";
        for ( int i = 0 ; i < CIRCULAR_BUFFER_LENGTH ; i++ ){
               std::cout << Buffer[i]<<" ";
        }
        std::cout<<"readIndex: " << this->readIndex << " writeIndex: " << this->writeIndex ;
        std::cout << std::endl << std::endl;
    }
#endif

};



#endif /* SIMPLE_DATA_STRUCTURES_CIRCULARBUFFER_T_H_ */
