#include <exception>

class Point2D {
    unsigned int x;// = 0;
    unsigned int y;// = 0;
    unsigned int z;// = 0;
    char* color;
public:
    Point2D();
    ~Point2D();
    void setX(int x);
    unsigned int getX() {
        return this->x;
    }
    void setY(int y);
    unsigned int getY() {
        return this->y;
    }
    void setZ(int z);
    unsigned int getZ() {
        return this->z;
    }
    void setColor(const char* color);
    const char* getColor() {
        return this->color;
    }
    void reset();
    void shift(int dx, int dy, int dz);
private:
    void validate(int value);
};