
//List类型（数组/集合）
var l1 = ["123",123,true];
void main()
{
  print(l1);
  print(l1.length);
  print(l1[0]);
  print(l1[2]);//从0开始从左往右索引
  main2();
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

//第四种定义方式
//var l6 = new List();（已弃用）

var l6 = List.filled(2,"123");//创建一个长度为2，内容均为123的集合
main2()
{
  print(l6);
}
//此集合长度固定，无法增加！！！
//也无法直接对list.length修改！！！
