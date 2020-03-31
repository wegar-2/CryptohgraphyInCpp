#ifndef POINT2D_HPP
#define POINT2D_HPP

class Point2D {
public:
    // class constructors
    Point2D(); // default constructor
    Point2D(double x, double y); // parametrized constructor
    Point2D(const Point2D& rhs); // copy constructor
    // class destructor
    ~Point2D();
    // getters and setters
    double GetX() const;
    double GetY() const;
    void SetX(double x);
    void SetY(double y);
    // operators
    const Point2D& operator++();
    const Point2D operator++(int flag);
    const Point2D& operator--();
    const Point2D operator--(int flag);
    const Point2D& operator=(const Point2D& rhs); // assignment operator
    // addition and subtraction of points
    Point2D operator+(const Point2D& rhs) const;
    Point2D operator-(const Point2D& rhs) const;

    // other
    void PrintPoint() const;

private:
    double* pCoordX;
    double* pCoordY;
};

#endif // POINT2D_HPP
