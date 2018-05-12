/**
 * 当数据域是对象，且没有提供无实参构造函数，则需通过初始化列表初始化数据域；
 * */
class Time {
    public:
        Time(int hour, int minute, int second) {

        }
    private:
        int hour;
        int minute;
        int second;
};

class Action {
    public:
        Action(int hour, int minute, int second) 
            :time(hour, minute, second)
        {
            // time = Time(hour, minute, second);
        }

    private:
        Time time;
};

int main() {

    return 0;
}
