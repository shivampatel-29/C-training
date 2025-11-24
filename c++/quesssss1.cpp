/*how to resolve the ambiguity that occurs in hybrid inheritance?
ambiguity - whenever a class inherits from two or more than two classes, it gets the behaviour of all those classes,
also it gets the behaviour of the parents its parent's classess.
due to this ,this child class may have multiple copies of the attributes and the behaviours of its grandparents class.
While accessing these copies c++ gets confused, as to which copy from which parent is being called.
this issue can be solved using any one of the following methods.

1. Clarifying the copy using scope resolution(::) operator in front of the variable or method name
2.In heirarichal inheritance , the two or more classes which are inheriting from a single base class should inherit virtually.
This results to create a single copy in the class that inherits from multiple classes.
*/