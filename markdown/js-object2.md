# 内置对象
- 定义：js语言自带的一些对象

## Math 数学对象

- 定义；不是一个构造函数，不需要new来调用，直接使用里面的属性，方法即可
- 1. 取绝对值：eg.console.log(Math.abs(-1))
- 如果abs()里面的值为字符串型，会把字符串型转换为数字型
- 2. 三个取整方法
-     eg. Math.floor()     取最小整数值
-         Math.ceil()      取最大整数值
-         Math.round()     四舍五入
- 3. 随机数方法
- random()返回一个随机的小数      ()里面不跟参数
- 4. 取两个数之间的随机整数
-  function getRandom(min, max){
-    return Math.floor(Math.random()*(max-min+1))+min
-  }
-  console.log(getRandom(1.10))

## Date ()日期对象

- 定义：是一个构造函数，必须使用new 来创建日期对象
- eg.let date=new Date()  创造一个数组对象
- 如果没有写参数，返回当前系统的当前时间
- 常用参数写法：数字型   字符串型
- 1. 日期格式化
-     date.getFullYear()  显示当前年分
-     date.getMonth()  显示当月（0～11）返回月份小1月，月份要+1
-     date.getDate()   显示几号
-     date.getDay()  显示当前星期几    周日返回0，周六返回6
-     date.getHours()   显示  时
-     date.getMinutes()  显示  分
-     date.getSeconds()  显示  秒
- 2. 获得Date总的毫秒数
- 距离1970.1.1过了多少毫秒
- eg 1.console.log(Date.now())
-    2.let nowTime = +new Date()

## 数组对象

- 1. 创建数组的两种方式
- 利用数组字面量
-  eg.let arr= [1, 2, 3]
-    console.log(arr[0])
- 利用new Array()
-   eg.let arr1=new Array(2, 3)    等价于【2，3】，表示里面有两个数组元素，为2和3
-   console.log(arr1)   
- 2. 检测是否为数组
-  1.instanceof运算符
-  eg.let arr=[]
-  console.log(arr instanceof Array)
-  2. Array.isArray(参数)
- 3. 添加删除数组元素方法
-  1.push（）在数组末尾，添加一到多个数组元素
- eg.let arr=[1, 2, 3]
-    arr.push(4)
- 注意：push可以给数组添加新的元素
-      push（）参赛直接写数组元素就可以了
-      push完毕后，返回到结果是新数组的长度
-      原数组也会发生变化
-  2.unshift 在数组开头，添加一到多个数组元素 
- 4. 删除数组元素
-  1.pop() 删除数组最后一个元素
-  注意：1. 一次只能删除一个
-       2.pop（）里面不加参数
-       3.pop完毕后，返回到是删除的那个元素
-  2.shift() 删除数组的第一个元素
- 5. 数组转换为字符串
-  toString()   默认数组值用，隔开
-  join(分隔符)  ()为空默认为， 否则用其他分隔符隔开

## 数组排序

- 1. 翻转数组
-     eg.let arr=[1, 2, 3]
-        arr.reverse()
- 2. 数组排序
-     eg.let arr1=[2, 5, 1, 6]
-        arr1.sort(function(a, b){
-        return a-b   升序排列
-        return b-a   降序排列
-        })
- 3. 返回数组元素索引号
-    indexOf(数组元素)   从前往后 返回第一个满足条件的索引号，如果无该元素则返回-1
-    lastIndexOf(数组元素)  从后往前 返回第一个满足条件的索引号，如果无该元素则返回-1
- 4. 数组去重
- 
