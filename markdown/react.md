  关于虚拟dom
  1. 虚拟dom是一个object对象
  2. 虚拟dom属性较少，仅react内部在用。真实dom属性较多，
  3. 虚拟dom最终会被react转换为真实dom，呈现在页面上

## 1. 组件：

-    函数组件：适用于简单组件
-    类式组件：适用于复杂组件

## 2.state

- 1. useState
- 用来定义状态的
- 2. 组件中的render方法中的this为组件实例对象
- 3. 组件自定义方法中的this为undefined，如何解决？
-  a. 强制绑定this：通过函数对象中的bind（）
-  b. 赋值语句+箭头函数
- 4. 状态数据，不能直接修改或更新

## 3. Hook

- 生命周期，行数，只能用在组件函数的最顶层
- const xxx=useState()
