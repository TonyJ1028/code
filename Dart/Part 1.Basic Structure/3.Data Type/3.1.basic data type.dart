//数值类型

int a = 1;
double b = 2;//没有float,double既可以是浮点型也可以是整形

//运算符：与C语言大体相同

//布尔(bool)类型(true/false)
bool t = true;
bool f = false;//只能赋true或false

//字符串定义方式
var str = "Hello world";
String str1 = "Dart";

var str2 = '''
1
   11
   111
  1111
 11111
''';//三个单引号（或双引号）可以换行编写，按文本格式输出，非常方便
//字符串/变量的拼接（变量的读取）
main()
{
  print("$str$str");//输出：Hello worldHello world
  int a = 1;
  print("$a$str1");
}
