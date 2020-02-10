//See snippet at end of file on "Pre-processor directives"
#ifndef __RING_BUFFER_HPP__
#define __RING_BUFFER_HPP__

//Return this value if 'front()' is called on an empty RingBuffer
#define RBUFF_ERRVAL 255

#include <stdint.h> //For uint8_t (unsigned, 1-byte integer)
#include <iostream> //ostreams and size_t
using namespace std;

class RingBuffer{
    public:
        RingBuffer(size_t capacity);
        RingBuffer(const RingBuffer &inBuff);
        ~RingBuffer();
        bool is_empty() const;  //See snippet below on 'const' after functions
        bool is_full() const;
        size_t size() const;
        size_t capacity() const;
        void push(uint8_t inByte);
        uint8_t front() const;
        void pop();
        void dequeue_bytes(uint8_t *dest, size_t numBytes);
        friend std::ostream& operator<<(std::ostream &os, const RingBuffer &rb);
        /** Normally 'private' member variables cannot be accessed by anything other than
         * the object itself. Friend functions/classes are an exception! 
         * If a function (or class) is declared as a 'friend' of this RingBuffer class, 
         * that function/class can freely access member variables of the RingBuffer.
         */

    private:
        uint8_t *buff;   //Pointer dynamically allocated memory
        size_t buffSize; //Current number of elements in buffer
        size_t buffCapacity;  //Size of storage space allocated for buffer
        size_t writeIndx;//Index to write next byte
        size_t readIndx; //Index to read next byte

        /** Add any other private member variables/functions you want here!
         * Only requirements are that you must not remove any of the members  
         * above this comment and you must NOT have a main() in your ringbuffer.cpp.
         * Feel free to add any intermediate functions or values to help with 
         * your implementation.
         */
};
#endif //#ifndef __RING_BUFFER_HPP__

/** Supplemental Learning: 'const' after a function
 * Putting 'const' after a function name is something that
 * can only be done with a member function in a C++ class.
 * A member function that is "const-qualified" cannot change any 
 * member variavbles of the class.  
 * This comes up when you want to pass in a class object into a function,
 * but you don't want that function to change your variables. 
 * The function can call any const-qualified member functions since those
 * are guaranteed to not alter any values in the class. 
 * "const-correctness" can be a pain to work around sometimes, but
 * it is an important thing to learn and can keep your objects safe. 
 */

/** Supplemental Learning: Pre-Processor Directive
 * These # statements are called PRE-PROCESSOR DIRECTIVES
 * They are commands run by the compiler and have a special 
 * syntax to them. 
 * The ones in this file are to make sure "ringbuffer.h" is only every included 
 * once per compilation. 
 * 
 * Breakdown of pre-processor directives used in this file...
 *  'ifndef' - "if not defined": 
 *      Similar to an if() statement, but more like an "if_not()" statement.
 *      'ifndef' is followed by a single flag. If that flag has not been 'define'd 
 *      somewhere, then everything between 'ifndef' and 'endif' will be executed 
 *      by the compiler. 
 *      
 *  'endif'  - "end if": 
 *      Think of this as the closing curly brace to an if() statement.
 *      You can have if() else() trees with Pre-Processor directives using
 *      commands like '#ifdef' '#ifndef' '#elif' '#else' and '#endif'
 * 
 *  'define' - "define"
 *      'define' can be used in two ways. 
 *      The first (shown in this file) is to simply define a flag. Examples...
 *          #define FLAG_YOU_WOULD_LIKE_TO_DEFINE
 *          #define DEBUG
 *      The second is to define a flag that holds a constant value. Examples...
 *          #define PI 3.14159
 *          #define MAX_ARRAY_SIZE 250
 *          #define XBEE_SERIAL_PORT "/dev/ttyUSB0"
 *      Note that you don't have to define a type for any of these values. 
 *      Pre-processor directives don't use C/C++ syntax, they're a different thing. 
 *      Also, all of these values are set at COMPILE TIME and cannot be changed.
 *      It's common practice to put constant values in ALL CAPS!
 *      
 *      Such 'define' statements can help make code more readible instead of having 
 *      "magic numbers" floating around in your code. Examples...
 *          for(unsigned i = 0; i < 250; ++i)...
 *      versus 
 *          for(unsigned i = 0; i < MAX_ARRAY_SIZE; ++i)...
 */ 