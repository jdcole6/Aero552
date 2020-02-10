#include "ringbuffer.hpp"

/** RingBuffer Capacity Constructor
 * Should dynamically allocate a 'uint8_t' array of size 'capacity'
 * This will be the private member 'buff'
 * 
 * Inputs:  'capacity' - number of elements in ring buffer
 */
RingBuffer::RingBuffer(size_t capacity){
    //Your implementation here
}

/** RingBuffer Copy Constructor
 * Should do a DEEP COPY of every element in 'inBuff'
 * (i.e. You should dyanamically allocate new memory and copy every element)
 * (Make sure the new 'buff' isn't just pointing to 'inBuff's memory
 *  this is what's called a SHALLOW COPY).
 * 
 * Inputs:  'inBuff' - input buffer to copy 
 */
RingBuffer::RingBuffer(const RingBuffer &inBuff){
    //Your implementation here!
}

/** RingBuffer Destructor
 * Should clean up any dynamically allocated memory
 * Destructors are called when the class object falls out of scope
 * or if a dyanmically allocated instance of the object is 'free()'d or 'delete'd
 */
RingBuffer::~RingBuffer(){
    //Your implementation here!
}

/** RingBuffer is_empty()
 * Returns: TRUE if the buffer is empty.
 *          FALSE otherwise
 */
bool RingBuffer::is_empty() const{
    //Your implementation here!
    return 0;
}

/** RingBuffer is_full()
 * Returns: TRUE if the buffer full
 *          FALSE otherwise
 */
bool RingBuffer::is_full() const{
    //Your implementation here!
    return 0;
}

/** RingBuffer size()
 * Returns: The number of elements currently in the ring buffer
 */
size_t RingBuffer::size() const{
    //Your implementation here!
    return 0;
}

/** RingBuffer capacity()
 * Returns: The size of storage space allocated for the buffer
 */
size_t RingBuffer::capacity() const{
    //Your implementation here!
    return 0;
}

/** RingBuffer push()
 * Adds a byte to the end of the ring buffer (back of the queue)
 * Should not do anything if ring buffer is full. 
 * (Good practice to print an error message, 
 *  However, I won't be grading error messages, just functionality).
 * 
 * Inputs: 'inByte' - byte to add to ring buffer
 */
void RingBuffer::push(uint8_t inByte){
    //Your implementation here!
}

/** RingBuffer front()
 * Return next (front of queue) element from ring buffer. 
 * Should return RBUFF_ERRVAL if empty. [Edit: 02/07/2020]
 * (Good practice to print an error message, 
 *  However, I won't be grading error messages, just functionality).
 * 
 * Returns: First element of the ring buffer. 
 */
uint8_t RingBuffer::front() const{
    //Your implementation here!
    return 0;
}

/** RingBuffer pop()
 * Remove next (front of queue) element from ring buffer. 
 * Should do nothing if buffer is empty.
 * (Good practice to print an error message, 
 *  However, I won't be grading error messages, just functionality).
 * 
 * Returns: Nothing [Edit: 02/07/2020] 
 */
void RingBuffer::pop(){
    //Your implementation here!
}

/** RingBuffer dequeue_bytes(uint8_t*, size_t)
 * Removes 'numBytes' elements from the front of the ring buffer
 * Removed elements should be stored (in order) in 'dest'
 * If 'dest' is 'nullptr', still remove elements.
 * Should do nothing if there are not enough elements in buffer
 * (Good practice to print an error message, 
 *  However, I won't be grading error messages, just functionality).
 * 
 * Inputs:  'source'    - pointer to bytes to add to buffer
 *          'numBytes'  - number of elements in 'source' to add
 */
void RingBuffer::dequeue_bytes(uint8_t *dest, size_t numBytes){
    //Your implementation here!
}

/** ostream operator<<()
 * Should write each element of the RingBuffer to the output stream 'os'. 
 * Elements should be printed in the order of the array 'buff'
 * DO NOT "start" at 'writeIndx' and "end" at 'readIndx'.
 * Print each byte as an unsigned, 1-byte integer. 
 * Each printed value should be separated by a space 
 * (trailing space character at the end of the buffer is okay!)
 * Basically, all values printed should be in the range [0, 255].
 * 
 * This function MUST return the the outputstream 'os'. We return a 
 * reference to the ostream so that we can chain output values like this...
 *      cout << "This is my ringBuff: " << rb << endl;
 * 
 * Returns:  'os' - The output stream we are printing the data to
 * 
 * Inputs:   'os' - The output stream we are printing the data to
 *           'rb' - The RingBuffer whose elements you must print
 */
std::ostream& operator<<(std::ostream &os, const RingBuffer &rb){
    ///Your implementation here!

    /**Treat 'os' like you would 'cout'. 
     * In fact, 'cout' is just a special 'ostream' that writes to 
     * "standard output" (or the terminal).
     * This function should start to demistify the "magic" of 'cout'.
     */

    //Example Syntax:
    //  os << "The first element of the buffer is: " << rb.buff[0] << '\n';
    return os;
}
