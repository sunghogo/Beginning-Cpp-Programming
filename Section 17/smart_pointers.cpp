/*
    Issues with Raw Pointers:
        - C++ provides absolute flexibility with memory management
            - Allocation, deallocation, lifetime management
        - Some potentially serious problems
            - Uninitialized (wild) pointers (pointing to random memory)
            - Memory leaks (not deallocating pointers)
            - Dangling pointers (pointing to deallocated memory)
            - Not exception safe (throws exception and never deallocates memory)
        - Smart pointers clears up ownership of pointers (who owns it? when should it be deleted?)

    Smart Pointers:
        - They are Objects instantiated using C++ template classes
            - Class template wrapper around a raw pointer
            - Overloaded Operators
                - Dereference (*)
                - Member Selection (->)
            - Pointer arithmetic NOT SUPPORTED (++, --, etc.)
            - Can have custom deleters            
        - Can only point to heap-allocated memory
        - Automatically call delete when no longer needed
        - Adhere to RAII (Resource Acquisition is Initialization) Principles
        - C++ Smart Ponter Types:
            - Unique Pointers (unique_ptr)
            - Shared Pointers (shared_ptr)
            - Weak Poin-ters (weak_ptr)
            - Auto Pointers (auto_ptr) (Deprecated and no longer used)

        #include <memory>
        std::smart_pointer_type<Type> ptr = ...

    Resource Acquisition is Iniitialization (RAII):
        - Common idiom/pattern used in software design based on container object lifetime
            - RAII objects acquire resources at object initialization time
        - Rsource Acquisition:
            - Open a file, allocate memory, acquire a lock, etc...
        - Is Initialization:
            - The resource is acquired in a constructor
        - Resource relinquishing
            - Happens in the destructor
                - Close the file, deallocate memory, release the lock, etc..
*/