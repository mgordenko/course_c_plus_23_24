#include <iostream>
#include <set>
#include <random>

class Vector3D
{
    public:
    /* class methods */
    
    // Task 1, empty constructor
    Vector3D();
    
    // Task 2, constructor with arguments
    Vector3D(double x, double y, double z);
    
    // Task 3, copy constructor
    Vector3D(const Vector3D& v2);
    
    
    // Task 4. Getters and setters (define for other attributes)
    // getter
    double getX() const
    {
        return _x;
    }
    
    // setter
    void setX(double x)
    {
        _x = x;
    }
    
    // Task 8. Magnitude
    double magnitude() const;
    
    private:
    /* attributes */
    double _x;
    double _y;
    double _z;
    
};

// Task 5. Operator +
// (can be defined here or inside the class)
Vector3D operator+ (const Vector3D& v1, const Vector3D& v2);

// Task 6. Operator * (dot product)
// (can be defined here or inside the class)
double operator* (const Vector3D& v1, const Vector3D& v2);

// Task 7. Operator * (scalar product)
// (can be defined here or inside the class)
Vector3D operator* (const Vector3D& v1, double d);

// Task 9. Operator <
// (can be defined here or inside the class)
bool operator<(const Vector3D& v1, const Vector3D& v2);


// Task 10. Operator << (printing)
// (can't be defined inside the class)
// Use definition from previous workshops


// Task 11. Operator >> (reading)
std::istream& operator>> (std::istream& in, Vector3D& v1)
{
    // read vector data
    
    return in;
}


void fillMultiset(size_t n, std::multiset<Vector3D>& mset)
{
    // generating random numbers
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> distr(-1, 1);
    
    
    // loop, add a new element to the multiset n times
    
    double newRandomNumber = distr(gen);
    
}


int main()
{

    // Final task
    // Part 1. Fill a multiset of Vector3D objects with random vectors.
    std::multiset<Vector3D> s;
    const size_t setSize = 100;
    fillMultiset(100, s);
    
    
    // Part 2. Print all elements of the multiset
    // printMultiSet(s);
    
    // Part 3. Calculate and print the average of all magnitudes of vectors
    // double averageMagnitude = calcAverageMagnitude(s);
    // std::cout << "Average magnitude is " << averageMagnitude << std::endl;
    
    return 0;
}
