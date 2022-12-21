#ifndef SIMPLE_DATA_STRUCTURES_CIRCULARBUFFER_T_H_
#define SIMPLE_DATA_STRUCTURES_CIRCULARBUFFER_T_H_

/*
 *
 * Template for a circular buffer
 *
 */

#define CIRCULAR_BUFFER_LENGTH 3

template <typename T>

class CircularBuffer {
public:
    CircularBuffer(){

        this->circularBufferWriteIndex = 0;
        this->circularBufferReadIndex = 0;

    };
    void writeElementToCircularBuffer( T  elementToAdd ){
        this->Buffer[this->circularBufferWriteIndex] = elementToAdd ;    // put Task into current end position of the buffer
        this->circularBufferWriteIndex++;                                     // increment buffer end index
        this->circularBufferWriteIndex %= CIRCULAR_BUFFER_LENGTH ;                // wrap end index around the buffer length
    };
    T readElementFromCircluarBuffer(){
        T elementFromBuffer = this->Buffer[this->circularBufferReadIndex]; // read the task from the read index position
        this->circularBufferReadIndex++;
        this->circularBufferReadIndex %= CIRCULAR_BUFFER_LENGTH;
        return elementFromBuffer;
    };

    int circularBufferWriteIndex;
    int circularBufferReadIndex;

    T Buffer[CIRCULAR_BUFFER_LENGTH];


};



#endif /* SIMPLE_DATA_STRUCTURES_CIRCULARBUFFER_T_H_ */
