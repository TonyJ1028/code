
bool flag = true;

void main()
{
//1.分支结构
  var a = 60;
  if(flag)
  {
    print(true);
  }
  else if (a == 60)
  {
    print("60");
  }
  else
  {
    print("false");
  }
  //switch-case结构
  var b = 5;
  switch(b)
  {
    case 1: print("1"); break;
    case 5: 
      print("5"); 
      break;
    default:
      print("default");
      break;
  }
  //三目运算符
  String c = flag ? 'True' : "False";//若flag为true给C赋？后值，反之赋：后值
  print(c);
  //??运算符
  var d;
  var e = d ?? 10;//若d空则赋10给e反之赋d给e
  print(e);
//2.try-catch结构
  try
  {
    var f = '';
    var g = double.parse(f);
    print(g);
  }
  catch(err)
  {
    print(0);
  }
}