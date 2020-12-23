//auto use
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    std::vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    //其中auto用到了C++11的类型推导
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
		//(*it).value
		//need add the *other wise build error
        std::cout <<"it:"<<*it<< std::endl;
    }

    return 0;
}
/*
$ ./a
it:1
it:2
*/