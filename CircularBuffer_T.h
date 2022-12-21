#ifndef SIMPLE_DATA_STRUCTURES_CIRCULARBUFFER_T_H_
#define SIMPLE_DATA_STRUCTURES_CIRCULARBUFFER_T_H_

/*
 *
 * Template for a circular buffer
 *
 */

#define RINGBUFFER_LENGTH 3

template <typename T>

class CircularBuffer {
public:
    CircularBuffer(){

        this->circularBufferWriteIndex = 0;
        this->circularBufferReadIndex = 0;

    };
    void writeElementToRingBuffer( T  elementToAdd ){
        this->Buffer[this->circularBufferWriteIndex] = elementToAdd ;    // put Task into current end position of the buffer
        this->circularBufferWriteIndex++;                                     // increment buffer end index
        this->circularBufferWriteIndex %= RINGBUFFER_LENGTH ;                // wrap end index around the buffer length
    };
    T readElementFromRingBuffer(){
        T elementFromBuffer = this->Buffer[this->circularBufferReadIndex]; // read the task from the read index position
        this->circularBufferReadIndex++;
        this->circularBufferReadIndex %= RINGBUFFER_LENGTH;
        return elementFromBuffer;
    };

    int circularBufferWriteIndex;
    int circularBufferReadIndex;

    T Buffer[RINGBUFFER_LENGTH ];


};



#endif /* SIMPLE_DATA_STRUCTURES_CIRCULARBUFFER_T_H_ */
