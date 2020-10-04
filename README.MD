This project is for creating a player class of which different types of players can be derived from such as a Basketball player. The base player can score, run, have a number and team etc.. while the derived player, in this case, a Basketball player, can have addition things such as win shares and minutes played.

The rest of this file is just self-practice markdown.

## Object Oriented Programming Pratice
- Simplify complex program to manageable level
- Break down into smaller problems
- Isolate functionalities
- Minimize and control interactions 

#### Abstraction <br>
Data abstraction refers to, providing only essential information to the outside world and hiding their background details(implementation and design), i.e., to represent the needed information in program without presenting the details.

#### Inheritance <br>
One of the most useful aspects of object-oriented programming is code reusability. As the name suggests Inheritance is the process of forming a new class from an existing class that is from the existing class called as base class, new class is formed called as derived class.

This is a very important concept of object-oriented programming since this feature helps to reduce the code size.

#### Polymorphism <br>
The ability to use an operator or function in different ways in other words giving different meaning or functions to the operators or functions is called polymorphism. Poly refers to many. That is a single function or an operator functioning in many ways different upon the usage is called polymorphism.

#### Encapsulation <br>
Wrapping up (combining) data and functions into a single unit is known as encapsulation.

#### Constructors <br>
A constructor is used to construct and initialize all the data members for objects.

#### Destructors <br>
Provide Destructor to free-up memory when SomeClass performs dynamic memory allocation

#### Interface <br>
This is what the user needs to interact with the product. It includes data and the set of perations that can be done on that data. This is separate from implementation.
<br>

### Problem Prevention Methods: <br>

#### Cohesion <br>
Create functions to do only one well-defined task.

#### Coupling <br>
Minimize function dependence on eachother.

#### Readability <br>
Comment your code
<br>

### Inheritance: <br>

### Friend Functions <br>
Functions that are not members of the class but CAN access private members of the class. It is appropriate to use friend functions for Operator overloading.

### Overloading <br>
Define new function in the derived class with same name but different parameter list 

### Overriding <br>
Rewrite function with same signature in derived class

### Proteccted: Access Specifier <br>
Derived classes inherit these members and can directly access them..

### Note: <br>
- Base-class constructor always called before derived-class
constructor
- If base class has only parameterized constructor, derived
class must supply constructor that calls base-class
constructor explicitly

