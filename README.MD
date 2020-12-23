I was curious and wanted to create a player class of which different types of players can be derived from such as a Basketball player. The base player can score, run, have a number and team etc.. while the derived player, in this case, a Basketball player, can have addition things such as win shares and minutes played.

Each player can do multiple things in order to improve their scoring, fitness, and overall stats. Those actions include running and practicing scoring. The following is an example of the output for the player base class:

'''
Player 1: 

Your player level is: 0
Your player name is: Peter Parker
Your player number is: 0
CONGRATULATIONS, you have reached level 20!!!
CONGRATULATIONS, you have reached level 22!!!
Your player level is: 22
Keep going! you can level up!
Peter Parker is one of the best players in league history. Throughout his career, he has scored 2 points per game. He retired with the Spurs as number 0.
The following are his stats:
Points Per Game: 2
Fitness: 20
Level: 22

'''



Player 2: 

Your player level is: 0
Your player fitness level is: 0
Your player ppg is: 0
CONGRATULATIONS, you have reached level 1!!!
CONGRATULATIONS, you have reached level 2!!!
CONGRATULATIONS, you have reached level 17!!!
CONGRATULATIONS, you have reached level 18!!!
CONGRATULATIONS, you have reached level 33!!!
CONGRATULATIONS, you have reached level 34!!!
Your player level is: 34
Your player fitness level is: 4
Your player ppg is: 30
BOB is one of the best players in league history. Throughout his career, he has scored 30 points per game. He retired with the Warriors as number 100.
The following are his stats:
Points Per Game: 30
Fitness: 4
Level: 34

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

