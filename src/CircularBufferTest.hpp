/*
 * CircularBufferTest.hpp
 *
 *  Created on: Dec 22, 2022
 *      Author: adrian
 */

#ifndef SIMPLE_DATA_STRUCTURES_SRC_CIRCULARBUFFERTEST_HPP_
#define SIMPLE_DATA_STRUCTURES_SRC_CIRCULARBUFFERTEST_HPP_

#include "CircularBuffer_T.hpp"

void circularBufferTest(){

    CircularBuffer<int> integerBuffer;
    CircularBuffer<int> checkBuffer;


        std::cout<<"write... ";
        integerBuffer.writeElement(10);
        std::cout << "Buffer: ";
        integerBuffer.printBuffer();

        std::cout<<"write... ";
        integerBuffer.writeElement(4);
        std::cout << "Buffer: ";
        integerBuffer.printBuffer();

        std::cout<<"write... ";
        integerBuffer.writeElement(3);
        std::cout << "Buffer: ";
        integerBuffer.printBuffer();

        std::cout<<"write... ";
        integerBuffer.writeElement(8);
        std::cout << "Buffer: ";
        integerBuffer.printBuffer();

        std::cout<<"write... ";
        checkBuffer.writeElementWithCheck(10);
        std::cout << "Check Buffer: ";
        checkBuffer.printBuffer();

        std::cout<<"write... ";
        checkBuffer.writeElementWithCheck(4);
        std::cout << "Check Buffer: ";
        checkBuffer.printBuffer();

        std::cout<<"write... ";
        checkBuffer.writeElementWithCheck(3);
        std::cout << "Check Buffer: ";
        checkBuffer.printBuffer();

        std::cout<<"write... ";
        checkBuffer.writeElementWithCheck(8);
        std::cout << "Check Buffer: ";
        checkBuffer.printBuffer();


        std::cout<<"read... ";
       integerBuffer.readElement();
       std::cout << "Buffer: ";
       integerBuffer.printBuffer();

       std::cout<<"read... ";
       integerBuffer.readElement();
       std::cout << "Buffer: ";
       integerBuffer.printBuffer();

       std::cout<<"read... ";
       integerBuffer.readElement();
       std::cout << "Buffer: ";
       integerBuffer.printBuffer();

       std::cout<<"read... ";
       integerBuffer.readElement();
       std::cout << "Buffer: ";
       integerBuffer.printBuffer();

       std::cout<<"read...";
       integerBuffer.readElement();
       std::cout << "Buffer: ";
       integerBuffer.printBuffer();

       std::cout<<"read... ";
       int checkBufferValue = 0;
       checkBuffer.readElementWithCheck( checkBufferValue );
       std::cout << "Check Buffer: "<<"Value: "<<checkBufferValue<<" " ;
       checkBuffer.printBuffer();

       std::cout<<"read... ";
       checkBufferValue = 0;
       checkBuffer.readElementWithCheck( checkBufferValue );
       std::cout << "Check Buffer: "<<"Value: "<<checkBufferValue<<" " ;
       checkBuffer.printBuffer();

       std::cout<<"read... ";
       checkBufferValue = 0;
       checkBuffer.readElementWithCheck( checkBufferValue );
       std::cout << "Check Buffer: "<<"Value: "<<checkBufferValue<<" " ;
       checkBuffer.printBuffer();

       std::cout<<"write... ";
       checkBuffer.writeElementWithCheck(69);
       std::cout << "Check Buffer: ";
       checkBuffer.printBuffer();

       std::cout<<"read... ";
       checkBufferValue = 0;
       checkBuffer.readElementWithCheck( checkBufferValue );
       std::cout << "Check Buffer: "<<"Value: "<<checkBufferValue<<" " ;
       checkBuffer.printBuffer();

       std::cout<<"read... ";
       checkBufferValue = 0;
       checkBuffer.readElementWithCheck( checkBufferValue );
       std::cout << "Check Buffer: "<<"Value: "<<checkBufferValue<<" " ;
       checkBuffer.printBuffer();

}


#endif /* SIMPLE_DATA_STRUCTURES_SRC_CIRCULARBUFFERTEST_HPP_ */
