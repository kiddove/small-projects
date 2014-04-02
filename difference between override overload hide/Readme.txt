difference between override overload and hide(redefine)

1.overload
函数名字相同，参数列表个数或者顺序或者类型不同，不能依靠返回类型来判断
1）相同返回（同一个作用域）
2）函数名字相同
3) 参数不同
4）virtual关键字可有可无
5）返回值可以不同

2.override
派生类重新定义基类的虚函数
1）不在一个作用域（分别作用于基类和派生类）
2）函数名字相同
3）参数相同
4）基类函数必须有virtual关键字，不能有static
5）返回值相同
6）重写函数的访问修饰符可以不用，基类是private的，派生类可以重写为public，protected

3.hide
1）不在一个作用域（分别位于基类和派生类）
2）函数名字相同
3）返回值可以不同
4）参数不同时。此时，无论有无virtual关键字，基类的函数将被隐藏
5）参数相同时。基类没有virtual关键字，此时基类的函数将被隐藏，有virtual的话就是override了