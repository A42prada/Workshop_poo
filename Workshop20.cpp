#include <iostream>
#include <cmath>

class Circle {
public:
    // Constructor
    Circle(double x, double y, double r) : x(x), y(y), r(r) {}

    // Getters for the position and radius
    double get_x() const { return x; }
    double get_y() const { return y; }
    double get_r() const { return r; }

    // Setters for the position
    void set_x(double x) { this->x = x; }
    void set_y(double y) { this->y = y; }

private:
    double x, y, r; // Position of the center and radius
};

// Set the position of the center
void set_pos(Circle *c, double x, double y) {
    c->set_x(x);
    c->set_y(y);
}

// Calculate the perimeter of the circle
double perimeter(const Circle &c) {
    return 2 * M_PI * c.get_r();
}

// TODO: Add a method to calculate the area of the circle

class Rectangle {
public:
    // Constructor
    Rectangle(double x, double y, double w, double h) : x(x), y(y), w(w), h(h) {}

    // Getters for the position, width, and height
    double get_x() const { return x; }
    double get_y() const { return y; }
    double get_w() const { return w; }
    double get_h() const { return h; }

    // Setters for the position
    void set_x(double x) { this->x = x; }
    void set_y(double y) { this->y = y; }

private:
    double x, y, w, h; // Position of the top left corner, width, and height
};

// Set the position of the top left corner
void set_pos(Rectangle *r, double x, double y) {
    r->set_x(x);
    r->set_y(y);
}

// Calculate the perimeter of the rectangle
double perimeter(const Rectangle &r) {
    return 2 * (r.get_w() + r.get_h());
}

// TODO: Add a method to calculate the area of the rectangle

int main() {
    Circle c{0, 0, 1};
    std::cout << perimeter(c) << std::endl;
    set_pos(&c, 1, 1);
    std::cout << "Coordinates of the center: (" << c.get_x() << ", " << c.get_y() << ")" << std::endl;

    Rectangle r{0, 0, 1, 2};
    std::cout << perimeter(r) << std::endl;
    set_pos(&r, -1, -1);
    std::cout << "Coordinates of the top left corner: (" << r.get_x() << ", " << r.get_y() << ")" << std::endl;
    return 0;
}