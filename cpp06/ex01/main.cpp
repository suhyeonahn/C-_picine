#include "Serialization.h"

// TIPS
// uintptr_t is large enough to hold any pointer.
// reinterpret_cast Operator -
//      Allows any pointer to be converted into any other pointer type.
//      Also allows any integral type to be converted into any pointer type and vice versa.
//      The result of a reinterpret_cast cannot safely be used for anything other than being cast back to its original type.
//      Other uses are, at best, nonportable.
//      Convert a data type according to demanded data type bits

uintptr_t   serialize(Data* ptr)
{
    uintptr_t   raw;
    
    raw = reinterpret_cast<uintptr_t>(ptr);
    return raw;
}

Data *      deserialize(uintptr_t raw)
{
    Data *  ptr;

    ptr = reinterpret_cast<Data*>(raw);
    return ptr;
}

int         main()
{
    std::cout << BOLDGREEN << "[ TEST ]" << std::endl << RESET;

    Data        src;
    Data *      des;
    uintptr_t   raw;

    src.value = 100;

    raw = serialize(&src);
    des = deserialize(raw);

    std::cout << "Address of original Data = " << &src << std::endl;
    std::cout << "Returned Data pointer of deserialize() = " << des << std::endl;

    std::cout << "Value of Original Data = " << src.value << std::endl;
    std::cout << "value of Data pointer of deserialize() = " << des->value << std::endl << std::endl;

    if (&src == des && src.value == des->value)
    {
        std::cout << GREEN << "The convertion is done successefully" << std::endl << RESET;
    }
}