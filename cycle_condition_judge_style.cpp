//在判断条件中对于异常情况都return掉，然后处理正常情况
#include<iostream>
using namespace std;
//int arr[]={1,2,3,4,5,6,7,8,9};
bool a = true;
bool b = true;
bool c = true;
int main()
{
	while(true)
	{
	   if(!a)
	   {
		  cout<<"1111111111"<<endl;
		  //一次使用的时候，用的是return,后面用的是break出错。
		  //自己建立模板，下次直接copy就ok了
		  continue;
	   }
	   if(!b)
	   {
		  cout<<"222222222"<<endl;
		  continue;
	   }
	   if(!c)
	   {
		  cout<<"3333333"<<endl;
		  continue;
	   }
	   cout<<"process the thing"<<endl;
	}
}
/*
process the thing
process the thing
process the thing
process the thing
process the thing
process the thing
process the thing
process the thing
process the thing
process the thing
process the thing
*/