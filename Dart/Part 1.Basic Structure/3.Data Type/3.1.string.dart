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
