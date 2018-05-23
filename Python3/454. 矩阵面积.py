class Rectangle:

    '''
     * Define a constructor which expects two parameters width and height here.
    '''
    def __init__(self, width, height) :
        self.__width = width
        self.__height = height
    
    '''
     * Define a public method `getArea` which can calculate the area of the
     * rectangle and return.
    '''
    def getArea(self) :
        return self.__width * self.__height

# 总耗时 503 ms
# 您的提交打败了 75.07% 的提交!