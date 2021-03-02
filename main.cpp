//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

// Put the assignment code here

class Quaternion {
private:
  double a, b, c, d;
public:
  double getA() const {
    return a;
  }
  double getB() const {
    return b;
  }
  double getC() const {
    return c;
  }
  double getD() const {
    return d;
  }

  Quaternion(){}
  Quaternion(double num1, double num2, double num3, double num4) {
    a = num1;
    b = num2;
    c = num3;
    d = num4;
  }
  bool operator==(const Quaternion& obj) const {
    if ((obj.a == this-> a) && (obj.b == this-> b) && (obj.c == this-> c) && (obj.d == this -> d))
      return true;
    else 
      return false;
  }
 Quaternion operator+(const Quaternion& obj) const {
   Quaternion obj1;
    obj1.a = obj.a + this -> a;
    obj1.b = obj.b + this -> b;
    obj1.c = obj.c + this -> c;
    obj1.d = obj.d + this -> d;
    return (obj1);
  }
  Quaternion operator-(const Quaternion& obj) const {
    Quaternion obj1;
    obj1.a = obj.a - this -> a;
    obj1.b = obj.b - this -> b;
    obj1.c = obj.c - this -> c;
    obj1.d = obj.d - this -> d;
    return (obj1);
  }
  Quaternion operator*(double x) const {
    Quaternion obj;
    obj.a = x * this -> a;
    obj.b = x * this -> b;
    obj.c = x * this -> c;
    obj.d = x * this -> d;
    return (obj);
  }
};

//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "q1" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        REQUIRE( q == p );
    }
    SECTION( "q2" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q + p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{0.0, 0.0, 0.0, 0.0};
        REQUIRE( (q - p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q * 2.0) == r );
    }
}
//------------------------------
