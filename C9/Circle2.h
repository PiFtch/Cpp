#define PI 3.14159
class Circle {
    public:
        Circle();
        Circle(double);
        double getArea();
        double getRadius();
        void setRadius(double);

    private:
        double radius;
};