//Maps:字典

//第一种定义方式
var person = 
{
  "name" : "Tony",
  "age" : 19,
  "BMI" : 25.6,
  "bechlor?" : true,
  "work?" : ["programmer","photographer"]
};//与Python相同，key只能为字符串，value可以为任何值

void main()
{
  print(person);
  print(person["name"]);//直接用中括号扩起key来访问
}