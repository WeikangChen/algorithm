/*
@Copyright:LintCode
@Author:   chenweikang
@Problem:  http://www.lintcode.com/problem/toy-factory
@Language: C++
@Datetime: 16-07-24 20:28
*/

/**
 * Your object will be instantiated and called as such:
 * ToyFactory* tf = new ToyFactory();
 * Toy* toy = tf->getToy(type);
 * toy->talk();
 */
class Toy {
public:
    virtual void talk() const=0;
};

class Dog: public Toy {
    virtual void talk() const {cout << "Wow" << endl;}
};

class Cat: public Toy {
    virtual void talk() const {cout << "Meow" << endl;}
};

class ToyFactory {
public:
    Toy* getToy(string& type) {
        if (type == "Dog")
            return new Dog();
        else if (type == "Cat")
            return new Cat();
        return NULL;
    }
};