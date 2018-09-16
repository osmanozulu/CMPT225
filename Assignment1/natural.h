// Natural.h

/////////////////////////////////////////////////////////////////////////
//
// Student Info
// ------------
//
// Name : <put your full name here!>
// St.# : <put your full SFU student number here>
// Email: <put your SFU email address here>
//
//
// Statement of Originality
// ------------------------
//
// All the code and comments below are my own original work. For any non-
// original work, I have provided citations in the comments with enough detail
// so that someone can see the exact source and extent of the borrowed work.
//
// In addition, I have not shared this work with anyone else, and I have not
// seen solutions from other students, tutors, websites, books, etc.
//
/////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////
//
// - Implement each of the following constructors and methods.
//
// - The details of the implementation of Natural are up to you.
//
// - **Do not** change the signatures of any of the constructors or methods
//   that are given (if you do, then the testing program will give you 0)
//
// - **Do not** add any more #includes.
//
// - You can add member initialization lists to the given constructors if you
//   like.
//
//  - You can add any other useful constructors, methods, or functions. Keep
//    all the code in this one file.
//
/////////////////////////////////////////////////////////////////////////

#include "cmpt_error.h"  // don't add any more #includes
#include <cassert>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Natural {
private:
    int number;

    //
    // ... implementation details go here ...
    //

    //
    // ... you can also add other helper methods here ...
    //

public:
    // Pre-condition:
    //    none
    // Post-condition:
    //    constructs a new Natural with value 0
    Natural() {  // default constructor
        // ...
        number = 0;
    }

    // Pre-condition:
    //    n >= 0
    //    (call cmpt:error if this is not satisfied)
    // Post-condition:
    //    constructs a new Natural with value n
    Natural(int n) {
        // ...
        number = n;
    }

    // Pre-condition:
    //    s consists of 1, or more, digit characters
    //    (call cmpt:error if this is not satisfied)
    // Post-condition:
    //    constructs a Natural representation of s so that
    //    this->to_string() == s
    Natural(const string& s) {
        // ...

         s=to_string(number)
        if (s.length()<1)
        {
            throw //cmpt error thing
        }
       
    }

    // Pre-condition:
    //    none
    // Post-condition:
    //    constructs a new Natural whose value is the same as other
    Natural(const Natural& other) {  // copy constructor
        // ...
        number=other.number;


    }

    // Pre-condition:
    //    none
    // Post-condition:
    //    returns the number of digits in this Natural
    int num_digits() const {
        // ...
        return length(number);
    }

    // Pre-condition:
    //    none
    // Post-condition:
    //    returns true if this Natural is 0, and false otherwise
    bool is_zero() const {
        // ...
        if (number ==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // Pre-condition:
    //    none
    // Post-condition:
    //    returns a new Natural equal to the sum of a and this Natural
    Natural operator+(const Natural& a) const {
        // ...
    }

    // Pre-condition:
    //    none
    // Post-condition:
    //    returns a new Natural equal to the product of a and this Natural
    Natural operator*(const Natural& a) const {
        // ...
    }

    // Pre-condition:
    //    none
    // Post-condition:
    //    returns a string representation of this Natural
    string to_string() const {
        // ...
    }

    //
    // ... you can add other helper methods here ...
    //

}; // class Natural

//
// the following methods are provided for convenience
//

ostream& operator<<(ostream& os, const Natural& b) {
    os << b.to_string();
    return os;
}

bool operator==(const Natural& a, const Natural& b) {
    return a.to_string() == b.to_string();
}

bool operator!=(const Natural& a, const Natural& b) {
    return !(a == b);
}

bool operator==(const Natural& a, const string& b) {
    return a.to_string() == b;
}

bool operator!=(const Natural& a, const string& b) {
    return !(a == b);
}