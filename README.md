### Assignment_04_20191103
#### The Fourth OOP assignment on Nov 3, 2019
#### Deadline is 6:00PM Nov 12, 2019

---------------------------------------
#### Requirements
1. Separating interface from implementation. You are responsible for creating directiries as follows.
   201816040199\Ex09_11\Rectangle.h  
   201816040199\Ex09_11\Rectangle.cpp  
   201816040199\Ex09_11\Ex09_11.cpp  
   201816040199\Ex09_12\Point.h  
   201816040199\Ex09_12\Point.cpp  
   201816040199\Ex09_12\Rectangle.h  
   201816040199\Ex09_12\Rectangle.cpp  
   201816040199\Ex09_12\Ex09_12.cpp  
   201816040199\Ex09_22\Time.h  
   201816040199\Ex09_22\Time.cpp  
   201816040199\Ex09_22\Ex09_22.cpp  
   201816040199\Ex09_23\Card.h  
   201816040199\Ex09_23\Card.cpp  
   201816040199\Ex09_23\DeckOfCards.h  
   201816040199\Ex09_23\DeckOfCards.cpp  
   201816040199\Ex09_23\Ex09_23.cpp  
2. Using Pascal case and Camel case for naming your classes and objects respectively.
3. C-style input/output is not allowed!
4. Commenting code is necessary!
---------------------------------------
#### P320-323
9.4 (Enhancing Class Time) Provide a constructor that’s capable of using the current time from the time and localtime functions—declared in the C++ Standard Library header <ctime>—to initialize an object of the Time class.

9.7 (Enhancing Class Time) Modify the Time class of Figs. 9.4–9.5 to include a tick member function that increments the time stored in a Time object by one second. Write a program that tests the tick member function in a loop that prints the time in standard format during each iteration of the loop to illustrate that the tick member function works correctly. Be sure to test the following cases:  
a) Incrementing into the next minute.  
b) Incrementing into the next hour.  
c) Incrementing into the next day (i.e., 11:59:59 PM to 12:00:00 AM).  

9.11 (Rectangle Class) Create a class Rectangle with attributes length and width, each of which defaults to 1. Provide member functions that calculate the perimeter and the area of the rectangle. Also, provide set and get functions for the length and width attributes. The set functions should verify that length and width are each floating-point numbers larger than 0.0 and less than 20.0.

9.12 (Enhancing Class Rectangle) Create a more sophisticated Rectangle class than the one you created in Exercise 9.11. This class stores only the Cartesian coordinates of the four corners of the rectangle. The constructor calls a set function that accepts four sets of coordinates and verifies that each of these is in the first quadrant with no single x- or y-coordinate larger than 20.0. The set function also verifies that the supplied coordinates do, in fact, specify a  rectangle. Provide member functions that calculate the length, width, perimeter and area. The length is the larger of the two dimensions. Include a predicate function square that determines whether the rectangle is a square.

9.22 (Time Class Modification) It would be perfectly reasonable for the Time class of Figs. 9.4–9.5 to represent the time internally as the number of seconds since midnight rather than the three integer values hour, minute and second. Clients could use the same public methods and get the same results. Modify the Time class of Fig. 9.4 to implement the time as the number of seconds since midnight and show that there is no visible change in functionality to the clients of the class. [Note: This exercise nicely demonstrates the virtues of implementation hiding.]

9.23 (Card Shuffling and Dealing) Create a program to shuffle and deal a deck of cards. The program should consist of class Card, class DeckOfCards and a driver program. Class Card should provide:  
a) Data members face and suit of type int.  
b) A constructor that receives two ints representing the face and suit and uses them to initialize the data members.  
c) Two static arrays of strings representing the faces and suits.  
d) A toString function that returns the Card as a string in the form “face of suit.” You can use the + operator to concatenate strings.  
Class DeckOfCards should contain:  
a) An array of Cards named deck to store the Cards.  
b) An integer currentCard representing the next card to deal.  
c) A default constructor that initializes the Cards in the deck.  
d) A shuffle function that shuffles the Cards in the deck. The shuffle algorithm should iterate through the array of Cards. For each Card, randomly select another Card in the deck and swap the two Cards.  
e) A dealCard function that returns the next Card object from the deck.  
f) A moreCards function that returns a bool value indicating whether there are more Cards to deal.  
The driver program should create a DeckOfCards object, shuffle the cards, then deal the 52 cards.

9.24 (Card Shuffling and Dealing) Modify the program you developed in Exercise 9.23 so that it deals a five-card poker hand. Then write functions to accomplish each of the following:  
a) Determine whether the hand contains a pair.  
b) Determine whether the hand contains two pairs.  
c) Determine whether the hand contains three of a kind (e.g., three jacks).  
d) Determine whether the hand contains four of a kind (e.g., four aces).  
e) Determine whether the hand contains a flush (i.e., all five cards of the same suit).  
f) Determine whether the hand contains a straight (i.e., five cards of consecutive face values).  
