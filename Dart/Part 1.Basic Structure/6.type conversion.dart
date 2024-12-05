void main()
{
  //1.Number 和 String间转换
  String str = "114514";

  var num1 = int.parse(str);
  print(num1);

  String str2 = "3.1415926";
  var num2 = double.parse(str2);
  print(num2);

  var num3 = 1919810;
  var str3 = num3.toString();
  print(str3 is String);  
  //2.其他类型与bool转换
    var str4 = '';
    print(str4.isEmpty); //isEmpty判断str4是否为空，返回bool值 


}