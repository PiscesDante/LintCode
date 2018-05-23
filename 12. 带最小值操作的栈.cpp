class MinStack {
public:
    MinStack() {
        // do intialization if necessary
    }

    /*
     * @param number: An integer
     * @return: nothing
     */
    void push(int number) {
        if (main_stack.empty()) {
            main_stack.push(number);
            min_stack.push(number);
        } else {
            main_stack.push(number);
            if (number < min_stack.top()) {
                min_stack.push(number);
            } else {
                min_stack.push(min_stack.top());
            }
        }
    }

    /*
     * @return: An integer
     */
    int pop() {
        int ret = main_stack.top();
        main_stack.pop();
        min_stack.pop();
        return ret;
    }

    /*
     * @return: An integer
     */
    int min() {
        return min_stack.top();
    }

private:
    stack<int> main_stack;
    stack<int> min_stack;

};

// 总耗时 161 ms
// 您的提交打败了 99.20% 的提交!