#include "stdafx.h"


//第一部分 c++ 基础
class partOne
{

//第二章 变量和基本类型
	{
	类型转换: a) 如果表达式里既有带符号类型又有无符号类型，当带符号类型取值为负时会出现异常结果
				因为带符号数会自动地转换为无符号数。即 转换为 该负数对无符号类型能表示的数值总数"取模"后的余数。__ p34
	字面量常量 : 一望而知的量。 short 没有字面量，浮点型字面值默认类型 double
				如果两个字符串字面值且仅由空格，缩进，换行符分割，则他们实际上是一个整体，当字面值比较长，一行不合适时，可分开书写 如：
				std::cout << " a really ,really long string literal "
							"that spans two lines" << endl;
	变量:1、int v1 = {0},v2{0}; 利用花括号初始化内置类型变量时，若存在类型转换而数据丢失，则初始化失败
		 2、函数体外的内置类型变量定义时未显式初始化会被默认初始化，函数体内的变量未显式初始化则不会默认初始化，值是未定义的，访问则出错
		 3、建议初始化每一个内置类型变量。
		 4、建议，当你第一次使用变量时再定义它

	指针 : 定义空指针  int* p = nullptr;    // (c11 新增方法，nullptr是个字面量)
							int* p = null; 		//(老方法，预处理变量，定义在 头文件cstdlib中)
							int* p = 0;			// 直接 0

	指针的引用：int*& r = &p;
		Tips：  面对较复杂的指针或引用声明语句时，	从右向左阅读有助于理解真是含义
				引用不支持类型不同对象的初始化，因为存在 中间缓冲对象-- - pages 55

	const限定符： const int v1 = getnumer();  // 运行初始化
				  const int v2 = 22;			// 编译初始化。编译过程中把该变量全部替换
				  const int v3;					// 未初始化，错误 
				  int v4 = 200;
				const默认本文件有效，若需要被其他文件访问，定义与声明时需添加extern const int
				cosnt int& r = v2; 		// 初始化常量引用时可绑定常量对象
				const int& r1 = v4;		//也允许用非常量的对象，字面值，甚至表达式作为初始值，因为尽管类型转换会出现“中间对象”，但const 不允许更改，所以并没有影响   ----pages 55

				const& ， 常量引用绑定的对象值，可通过其他途径(比如对象直接修改)修改，但不能通过此引用修改
				与引用类似——指向常量的指针
					const int* p = &v2; 	// 常量对象必须由指向常量的指针 指向，但指向常量的指针却可以由其他类型初始化


				顶层const ： 指针本身是常量 即 常量指针 ，int* const p = &v4; 或者 const int i2 = 3;
				底层const ： 指针所指向的对象是常量 ， const int* i = &v2;

		constexpr变量： 一定是一个常量，必须要用常量表达式初始化。
					constexpr int  mf = 20;   // 20 is 常量表达式
				特殊情况：constexpr int* p = &mf;   // 这里 p是 常量指针，即 constexpr形容的是 p
	类型处理：
				typedef double ware;   //类型别名
				typedef ware base,* p;  //类型别名，p为 复合类型

				const p p1 = 0;   		// p为double* 类型，所以基本数据类型为指针，p1为指针，此时const形容的p1变量，所以p1是常量指针(不可用原类型替换来理解)
				c++11：using newtype = int;  // c11的新别名声明方式
					newtype i = 23；

		auto：编译器代我们分析表达式类型，必须有初始值。
				一条语句定义多个变量时，只能代表一种类型
				忽略顶层const，保留底层const 。如对常量对象取地址，推导类型也是指向常量的指针,设置一个类型为auto的引用时，初始值中的顶层常量属性依旧保留
				如需推导定义顶层const 变量，必须手动指出，const auto f = i;

		decltype(f())：返回f函数的 返回值类型 。
				变量时 返回的是变量类型。想要得到引用的基础类型，可在把引用作为表达式一部分 如  r + 0    --page 63
				int* p = &i;    decltype(*p) c; // c 是int & ,必须初始化 。
				decltype((i)) tt;   // err , decltype 的表达式如果是加上括号的变量，则返回类型是引用
				typeid(变量或表达式).name();  // 返回值是 char const * 。作用：返回括号内参数类型 
		头文件 “必须”加头文件保护符(定义预处理变量)

	}

//第三章	字符串(string) 向量(vector) 数组array
	{
			1、命名空间： 头文件不应包含 using 生命
2、
{
	string 	cin >> s  // 遇空格结束输入
		cout << s
		getline(cin, s); //遇换行符结束一行，但不把cin中的换行符，写入s
	s.size(); //返回值为unsigned int ，与有符号变量计算时要注意
	字面值与string对象做加法时，确保加号两侧有一个string对象
		string s1 = s2 + "hello" + "world"; // 此时正确

	建议使用c++版本的c标准库头文件，例如： cctype  对应C语言中的 ctype.h
		范围for   for (auto c : str5) // 基于范围的for语句 遍历 string字符序列。若想改变序列元素，循环变量c定义成引用类型即可
}

3、迭代器：string::iterator  it;
{
	cout << c << endl;
	循环读入含标点的字符串，去标点后输出：
		for (string s; getline(cin, s); cout << endl)
			for (auto c : s)
				if (!ispunct(c))
					cout << c;
	// ** 注意范围for内的遍历序列大小不能改变
	3、vector：其本质是模板而不是类型。能用大多数类型对象作为其元素，但不含引用(不是对象)
		vector<int> v1;   // 默认 
	vector<int> v1(v2); // 复制
	vector<int> v3(3, 4); // 三个 对象，初始化值 4
	vector<int> v4(3);  // 三个 默认初始值对象 
	vector<int> v5{ 1,2,5,3 }; // list initialize  
	vector<int> v6 = { 1,2,4,6 };// list initialize 或 if initialized 则为拷贝替换

	vector<string>  v6("hello "); // err, con't use literal initialize v6
	vector<string>  v7{ 4 };  		//if 花括号内的值不能用来初始化(例如类型不同)，则考虑用这样的值来构造。此为4 个string 对象
	vector<string>  v8{ 10,"hello" }; // 原理同上， 10个 值为 “hello”的元素

	习题： vector<string> v8;
	for (string buffer; cin >> buffer; v8.push_back(buffer));  // 循环输入 字符串  遇文件结束符EOF结束，windos下为ctrl+z 

}
4、迭代器
{
		1 - 若容器为空，begin和end返回同一iterator，尾后迭代器(end)
		2 - *iter  // 获取所指元素的引用(即内容可更改)
		3 - iter->mem // 获取该迭代器所指元素 内的mem元素
		4 - ++iter, --iter// 递增 递减。移动到下一个元素 ，上一个元素
		5 - == ， != // 判断是否只想同一元素。
		6 - (*iter).empty(), iter->empty() // 访问对象成员

		vector<int> v1;
	const vector<int> v2; // 若对象是常量，则begin 和end 返回const_iterator
	auto it1 = v1.begin(); // it1 类型是 vector<int>::iterator 
	auto it2 = v2.begin(); // it2 类型是 vector<int>::const_iterator 
	//c11 规定
	auto v3 = v1.cbegin(); // cbegin，cend 专门返回常量类型迭代器const_iterator

	*但凡使用了迭代器循环体，都不要向迭代器所属容器添加元素，会导致迭代器失效*
		//遍历对象元素中的元素，变大写
		vector<string> text;
	for (string line; getline(cin, line); text.push_back(line));

	for (auto& word : text)
	{
		for (auto& ch : word)
			if (isalpha(ch)) ch = toupper(ch);
		cout << word << " ";
	}

	3.4.2	迭代器运算：
		iter + n // 后移	
		iter - n // 前移
		iter += n // 后移新位置
		iter -= n //前移新位置
		iter2 - iter1 // 得到的是差值 
			> , < , >= , <= , != // 判断

	auto mid = v1.begin() + v1.size() / 2;
	if (iter < mid)  // 处理前半部分元素

  // redo the 3.3.3  use iterator
		vector<string> v6;
	for (string str; cin >> str; v6.push_back(str));

	for (auto beg = v6.begin(); beg != v6.end(); beg++)
	{
		for (auto c = (*beg).begin(); c != (*beg).end(); c++)
		{
			*c = toupper(*c);
		}
		cout << *beg << endl;
	}

}

5、数组
{
	1、数量必须是 常量表达式 例如：,const , constexpr;
	2、函数内内置类型数组(和变量)的默认初始化是未定义的
}
	}

	// Chapter six 函数
	{
		1、 函数的不会改变的形参 定义成普通引用  是常见错误。
			① 让调用者 误认为该值可以改动。
			② 如果实参是常量类型，则初始化失败。
	}

}
