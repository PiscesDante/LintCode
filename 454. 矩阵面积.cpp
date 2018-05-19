// 因为LintCode并没有提供C++的环境，代码由Python3完成

// ***********************************************************************************
// class Rectangle:

//     '''
//      * Define a constructor which expects two parameters width and height here.
//     '''
//     def __init__(self, width, height) :
//         self.__width = width
//         self.__height = height
    
//     '''
//      * Define a public method `getArea` which can calculate the area of the
//      * rectangle and return.
//     '''
//     def getArea(self) :
//         return self.__width * self.__height

// 总耗时 503 ms
// 您的提交打败了 76.02% 的提交!

// ***********************************************************************************

// 下面补充一个C++版本的

class Rectangle {

public:
    Rectangle() = default;
    Rectangle(double in_width = 0, double in_height = 0) :
        width(in_width), height(in_height) { }
    Rectangle(const Rectangle& rhs);
    Rectangle& operator = (const Rectangle& rhs);

    inline double getArea() const { return width * height; }

    ~Rectangle();

private:
    double width = 0;
    double height = 0;

};

Rectangle::Rectangle(const Rectangle& rhs) {
    width = rhs.width;
    height = rhs.height;
}

Rectangle& Rectangle::operator = (const Rectangle& rhs) {
    if (&rhs != this) {
        this->width = rhs.width;
        this->height = rhs.height;
    }
    return *this;
}