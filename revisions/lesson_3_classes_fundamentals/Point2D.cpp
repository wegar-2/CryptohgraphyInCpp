#include <iostream>
#include "Point2D.hpp"


/* ========================================================================== */
/* CLASS CONSTRUCTORS AND DESTRUCTOR */
Point2D::Point2D() :
    pCoordX(new double(0)), pCoordY(new double(0)) {
        std::cout << "Class Point2D unparametrized constructor called..." << std::endl;
    }

Point2D::Point2D(double x, double y) :
    pCoordX(new double(x)), pCoordY(new double (y)) {
        std::cout << "Class Point2D parametrized constructor called..." << std::endl;
    }

Point2D::~Point2D() {
    std::cout << "Class Point2D destructor called..." << std::endl;
    delete pCoordX;
    delete pCoordY;
}

Point2D::Point2D(const Point2D& rhs) {
    *pCoordX = rhs.GetX();
    *pCoordY = rhs.GetY();
}



/* ========================================================================== */
/* CLASS SETTERS AND GETTERS */
double Point2D::GetX() const {
    return *pCoordX;
}

double Point2D::GetY() const {
    return *pCoordY;
}

void Point2D::SetX(double x) {
    *pCoordX = x;
}

void Point2D::SetY(double y) {
    *pCoordY = y;
}


void Point2D::PrintPoint() const {
    std::cout << "Printing a point: " << std::endl;
    std::cout << "\t\tx = " << *pCoordX << std::endl;
    std::cout << "\t\ty = " << *pCoordY << std::endl;
}



/* ========================================================================== */
/* OVERLOADING CLASS OPERATORS */

const Point2D& Point2D::operator++() {
    // increment this instance
    *pCoordX = *pCoordX + 1.00;
    *pCoordY = *pCoordY + 1.00;
    // return this
    return *this;
}

const Point2D Point2D::operator++(int flag) {
    Point2D tempPoint = Point2D(this->GetX(), this->GetY());
    *pCoordX = *pCoordX + 1.00;
    *pCoordY = *pCoordY + 1.00;
    return tempPoint;
}

const Point2D& Point2D::operator--() {
    // increment this instance
    *pCoordX = *pCoordX - 1.00;
    *pCoordY = *pCoordY - 1.00;
    // return this
    return *this;
}

const Point2D Point2D::operator--(int flag) {
    Point2D tempPoint = Point2D(this->GetX(), this->GetY());
    *pCoordX = *pCoordX - 1.00;
    *pCoordY = *pCoordY - 1.00;
    return tempPoint;
}

const Point2D& Point2D::operator=(const Point2D& rhs) {
    std::cout << "Class Point2D assignment operator called..." << std::endl;
    *pCoordX = rhs.GetX();
    *pCoordY = rhs.GetY();
}

Point2D Point2D::operator+(const Point2D& rhs) const {
    return Point2D(this->GetX() + rhs.GetX(), this->GetY() + rhs.GetY());
}

Point2D Point2D::operator-(const Point2D& rhs) const {
    return Point2D(this->GetX() - rhs.GetX(), this->GetY() - rhs.GetY());
}

/* ========================================================================== */

