#include<iostream>
#include<vector>
using namespace std;
int main()
{
    std::vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    /*easy,日志打印的时候，用这个方法非常的方便的
	打印日志的时候需要很多的代码，最后两句for循环
	编程了下面一句语句，是不是非常的好啊*/
	
    for (auto n : arr)
    {
        std::cout << "n:"<< n << std::endl;
    }

    return 0;
}
/*$ ./a
n:1
n:2
*/