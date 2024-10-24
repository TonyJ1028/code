//与C类似，可以通过声明变量类型声明变量
//但可以直接用 var <varname> = <result>声明,自动判断变量类型
int a = 1;
double b = 3.123123123;//此为Dart中双精浮点默认精度
var c = 114514;
var d = "Hello world";
String j = "You need Dart";
const pi = 3.141592653589793;
final e = 2.718288;
/*
声明规则：
1.只能用ABCabc123_$
2.开头不能是数字
3.区分大小写
 */
//final 与 const的区别：final只在*变量使用前*被初始化，因此可以被定义为自发变化的量，比如时间

main()
{
  final a1 = new DateTime.now();
  print(a1);
}
