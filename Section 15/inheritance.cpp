/*
    Inheritance:
        - Provides a method for creating new classes from existing classes
            - New class contains data and behaviors of existing classes
        - Allows for:
            - Reuse of existing classes
            - Focus on common attributes among a set of classes
            - New classes to modify behavior of existing classes to make it unique (without changing original class)

        class NewClass : public OriginalClass {
            ...
        };

    Terminology:
        - Inheritance:
            - Process of creating new classes from existing classes (reuse mechanism)
        - Single Inheritance:
            - A new class is created from another 'single' class
        - Multiple Inheritance:
            - A new class is creted from two (or more) other classes
        - Base Class (aka parent class, super class):
            - The class being extended or inherited from
        - Derived Class (aka child class, sub class):
            - The class inheriting the attributes and operations from (created from) Base class 
        - "Is-A" RelationShip:
            - Public inheritance
            - Derived classes are sub-types of their Base classes
            - Can use a dervied class object whenever we use a base class object
        - Generalization:
            - Combining similar classes into a single, more general class based on common attributes
        - Specialization:
            - Creating new classes from existing classes proving more specialized attributes or operations
        - Inheritance or Class Hierarchies
            - Organization of our inheritance relationships
    
    Public Inheritance vs. Composition:
        - Both allow reuse of existing classes:
            - Public Inheritance
                - "Is-A" relationship
            - Composition
                - "Has-A" relationship 

        - Composition:
            class Person {
            private:
                std::string name; // has-a name
                Account account;  // has-a account
            };
            
    In UML diagrams:
            - Derived classes point towards base classes    
            - Components/Associated classes are connected sideways
            - Moving up = more generalization
            - Moving down = more specialization
*/