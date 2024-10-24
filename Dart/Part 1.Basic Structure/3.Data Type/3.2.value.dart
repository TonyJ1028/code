//数值类型

int a = 1;
double b = 2;//没有float,double既可以是浮点型也可以是整形

//运算符：与C语言大体相同

//布尔(bool)类型(true/false)
bool t = true;
bool f = false;//只能赋true或false

//List类型（数组/集合）
var l1 = ["123",123,true];
void main()
{
  print(l1);
  print(l1.length);
  print(l1[0]);
  print(l1[2]);//从0开始从左往右索引
}
//第二种List定义方式（指定类型集合）
var l2 = <String>["123","114514","1919810"];
var l3 = <int>[123,114514,1919810];

//第三种定义方式（增加数据）
var l4 = [];
main1()
{
  l4.add("123");//需要在函数内操作
  l2.add("456");//任何用[]定义的List容量可变
}

//第四种定义方式（已弃用）